#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 2e5 + 10;

int n, R, Q;
int s[N], w[N], q[N], q0[N], q1[N];

bool cmp(int a, int b){
	if(s[a] != s[b]) return s[a] > s[b];
	return a < b;
}

int main() {

	cin >> n >> R >> Q;

	for(int i = 1; i <= 2 * n; i++) cin >> s[i];
	for(int i = 1; i <= 2 * n; i++) cin >> w[i];
	for(int i = 1; i <= 2 * n; i++) q[i] = i;

	sort(q + 1, q + 2 * n + 1, cmp);

	while(R--){
		int x = 1, y = 1;
		for(int i = 1; i <= n * 2; i += 2){
			int a = q[i], b = q[i + 1];
			if(w[a] > w[b]){
				s[a]++;
				q1[y++] = a;
				q0[x++] = b;
			}
			else{
				s[b]++;
				q1[y++] = b;
				q0[x++] = a;
			}
		}

		int i = 1, j = 1, k = 1;
		while(i < x && j < y){
			if(cmp(q0[i], q1[j])) q[k++] = q0[i++];
			else q[k++] = q1[j++];
		}

		while(i < x) q[k++] = q0[i++];
		while(j < y) q[k++] = q1[j++];
	}

	cout << q[Q] << endl;

	
	return 0;
}


