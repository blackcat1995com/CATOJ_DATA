#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int n;
vector<int> v;

int main() {

	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		int t;
		scanf("%d", &t);
		v.push_back(t);
	}

	int x;
	scanf("%d", &x);

	v.erase(v.begin() + x - 1);

	for(auto x : v) printf("%d ", x);
	
	return 0;
}

