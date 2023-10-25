#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1000;

int n, m;
int h[N];
int sum = 0;

int main() {

	cin >> n >> m;
	
	while(m--){
		int x;
		cin >> x;
		h[x] += 1;
		if(h[x] == 1)
			sum += 1;
	}
	
	if(sum == n){
		cout << n << endl;
		return 0;
	}
	
	for(int i = 0; i < n; i++)
		if(h[i] == 0)
			cout << i << " ";
}
