#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 1e5 + 10;

int n;
int a[N];

void quick_sort(int a[], int L, int R){
	if(L >= R) return;
  	int pivot = a[L], i = L - 1, j = R + 1;
  	while(i < j){
    	while(a[++i] < pivot);
      	while(a[--j] > pivot);
      	if(i < j) swap(a[i], a[j]);
    }
  
  	quick_sort(a, L, j), quick_sort(a, j + 1, R);
}

int main() {
  
  	cin >> n;
  	for(int i = 1; i <= n; i++) cin >> a[i];
  
  	random_shuffle(a + 1, a + n + 1);
  
  	quick_sort(a, 1, n);
  
  	for(int i = 1; i <= n; i++) cout << a[i] << " ";

	return 0;
}

