#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

int n;
int a[N], cnt[N], res[N];

int main() {
  
  	cin >> n;
  	for(int i = 0; i < n; i++){
    	cin >> a[i];
      	cnt[a[i]]++;
    }
  
  	for(int i = 1; i < N; i++) cnt[i] += cnt[i - 1];
  
  	for(int i = n - 1; i >= 0; i--)
      	res[--cnt[a[i]]] = a[i];
  
  	for(int i = 0; i < n; i++) cout << res[i] << " ";
	
	return 0;
}

