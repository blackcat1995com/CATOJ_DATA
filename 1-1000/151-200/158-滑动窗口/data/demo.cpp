#include <iostream>
#include <cstdio>

using namespace std;

const int N = 1e6 + 10;

int n, k;
int a[N], q[N];

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	cin >> n >> k;
	for(int i = 1; i <= n; i++) cin >> a[i];

	int hh = 0, tt = -1;

	for(int i = 1; i <= n; i++){
		if(hh <= tt && i - k + 1 > q[hh]) hh++;
		while(hh <= tt && a[q[tt]] >= a[i]) tt--;
		q[++tt] = i;
		if(i >= k)
			cout << a[q[hh]] << " ";
	}

	cout << endl;

	hh = 0, tt = -1;

	for(int i = 1; i <= n; i++){
		if(hh <= tt && i - k + 1 > q[hh]) hh++;
		while(hh <= tt && a[q[tt]] <= a[i]) tt--;
		q[++tt] = i;
		if(i >= k)
			cout << a[q[hh]] << " ";
	}

	return 0;
}

