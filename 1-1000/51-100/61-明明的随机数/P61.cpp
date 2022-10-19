#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1010;

int n;
int a[N];

int cnt = 0;

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++){
    	int x;
      	cin >> x;
      	a[x]++;
      	if(a[x] == 1) cnt++;
    }
  
  	cout << cnt << endl;
  
  	for(int i = 1; i < N; i++){
    	if(a[i]) cout << i << " ";
    }
	
	return 0;
}

