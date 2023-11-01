#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

const int N = 1e7 + 10;

int n, m;
int cnt[N];
bool book[N];

vector<int> v;

int res = 0;

void work(int n){

  	for(int i = 2; i <= n; i++){
    	if(!book[i]) {
    		v.push_back(i);
    		cnt[i] = 1;
		}
      	for(int j = 0; v[j] <= n / i; j++){
        	book[v[j] * i] = true;
        	cnt[i * v[j]] = cnt[i] + 1;
          	if(i % v[j] == 0) break;
        }
    }
  
}

int main() {
  
  	cin >> n >> m;
  
	work(m);
  
  	for(int i = n; i <= m; i++)
  		res = max(res, cnt[i]);
//  		cout << i << " " << calc(i) << endl; 
//        work(i);
    
    cout << res << endl;
	
	return 0;
}
