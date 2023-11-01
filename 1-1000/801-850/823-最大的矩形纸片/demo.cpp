#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;
const int N = 1e6 + 10;

int n;
int h[N], L[N], R[N], q[N];

int main() {
	
	cin >> n;
	
	for(int i = 1; i <= n; i++) cin >> h[i];
	h[0] = h[n + 1] = -1;
	
	int tt = 0;
	q[0] = 0;
	
	// �ҵ���ߵ�һ������С��  ��������ջ 
	for(int i = 1; i <= n; i++){
		while(h[i] <= h[q[tt]]) tt--;
		L[i] = q[tt];
		q[++tt] = i;
	}

	tt = 0;
	q[0] = n + 1;
	// �ҵ��ұߵ�һ������С�� 
	for(int i = n; i >= 1; i--){
		while(h[i] <= h[q[tt]]) tt--;
		R[i] = q[tt];
		q[++tt] = i;
	}
	
	LL res = 0;
	
	for(int i = 1; i <= n; i++)
		res = max(res, (LL)h[i] * (R[i] - L[i] - 1));
	cout << res << endl;
	
	return 0;
}
