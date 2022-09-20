#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

const int N = 1010;

int n, m;
int p[N], s[N];
vector<int> q[N];

int find(int x){
	if(p[x] != x) p[x] = find(p[x]);
  	return p[x];
}

void merge(int x, int y){
	p[y] = x;
  	s[x] += s[y];
}

int main() {
  
  	cin >> n;
  
  	for(int i = 1; i <= n; i++){
    	int cnt;
      	cin >> cnt;
      	while(cnt--){
        	int x;
          	cin >> x;
          	q[i].push_back(x);
        }
    }
  
  	for(int i = 1; i <= n; i++){
    	p[i] = i;
      	s[i] = 1;
    }
  
  	for(int i = n; i >= 1; i--){
    	for(int j = 0; j < q[i].size(); j++){
        	if(q[i][j] > i){
            	if(find(i) != find(q[i][j])) merge(find(i), find(q[i][j]));
                else continue;
              
              	if(s[i] > n / 2){
                	cout << i << endl;
                  	return 0;
                }
            }
        }
    }
  
 
	
	return 0;
}

