#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e5 + 10;
int n, k;

struct Node{
	int h, w;
}node[N];


bool check(int x){
	int res = 0;
	for(int i = 1; i <= n; i++)
		res += (node[i].h / x) * (node[i].w / x);
	
	return res >= k;
}

int main() {

	cin >> n >> k;

	for(int i = 1; i <= n; i++)
		cin >> node[i].h >> node[i].w;
		
	int L = 1, R = N;
	while(L < R){
		int mid = L + R + 1 >> 1;
		if(check(mid)) L = mid;
		else R = mid - 1;
	}
	
	cout << L << endl;
	
	return 0;
}


