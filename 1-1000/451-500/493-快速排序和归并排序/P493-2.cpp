#include <iostream>
#include <cstdio>
using namespace std;


const int N = 1e5 + 10;

int n, a[N], tmp[N];

void merge_sort(int a[], int L, int R){
	if(L >= R) return;
  	int mid = L + R >> 1;
  	merge_sort(a, L, mid), merge_sort(a, mid + 1, R);
  
  	int k = 1, i = L, j = mid + 1;
  
  	while(i <= mid && j <= R){
    	if(a[i] <= a[j]) tmp[k++] = a[i++];
      	else tmp[k++] = a[j++];
    }
  
  	while(i <= mid) tmp[k++] = a[i++];
  	while(j <= R) tmp[k++] = a[j++];
  
  	for(int k = 1, i = L; i <= R; i++,  k++) a[i] = tmp[k];
}

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  
  	merge_sort(a, 1, n);
  
  	for(int i = 1; i <= n; i++) cout << a[i] << " ";

	return 0;
}
