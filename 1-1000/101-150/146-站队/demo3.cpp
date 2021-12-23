#include <iostream>
#include <cstdio>
using namespace std;

const int N = 210;

int n;
int a[N];

int main() {

	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];

	for(int i = 1; i <= n - 1; i++){
      	bool flag = true;
		for(int j = 1; j <= n - i; j++)
			if(a[j] > a[j + 1]) swap(a[j], a[j + 1]), flag = false;
      	if(flag) break;
	}

	for(int i = 1; i <= n; i++) cout << a[i] << " ";
	
	return 0;
}

