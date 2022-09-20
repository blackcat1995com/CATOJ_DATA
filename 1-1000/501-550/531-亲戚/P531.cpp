#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e5 + 10;
int n, m;
int p[N], s[N];

int find(int x){
	if(p[x] != x) p[x] = find(p[x]);
  	return p[x];
}

void merge(int a, int b){
	int pa = find(a), pb = find(b);
  	if(pa != pb){
    	p[pb] = pa;
      	s[pa] += s[pb];
    }
}

int main() {
  
  	cin >> n >> m;
  	for(int i = 1; i <= n; i++){
    	p[i] = i;
      	s[i] = 1;
    }
  
  	while(m--){
    	char op[2];
      	int a, b;
      	cin >> op;
      	if(*op == 'M'){
        	cin >> a >> b;
          	merge(a, b);
        }
      	else{
        	cin >> a;
          	cout << s[find(a)] << endl;
        }
    }
	
	return 0;
}

