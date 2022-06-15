#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 1e5 + 10;

int n, k, len = 0;
int a[N];
bool h[N];

int quick_select(int a[], int L, int R, int k){
	if(L == R) return a[L];
  	int pivot = a[L], i = L - 1, j = R + 1;
  	while(i < j){
    	while(a[++i] < pivot);
      	while(a[--j] > pivot);
      	if(i < j) swap(a[i], a[j]);
    }
  
  	int lsum = j - L + 1;
  
  	if(k <= lsum) return quick_select(a, L, j, k);
  
  	return quick_select(a, j + 1, R, k - lsum);
}

int main() {
  
  	cin >> n >> k;
  	for(int i = 1; i <= n; i++) {
    	int x;
      	cin >> x;
      	if(!h[x]){
        	a[++len] = x;
          	h[x] = true;
        }
    }
  
  	if(k > len){
    	puts("NO RESULT");
      	return 0;
    }
  
  	cout << quick_select(a, 1, len, k) << endl;

	return 0;
}

