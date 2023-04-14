#include <iostream>
#define lowbit(x) x & -x
using namespace std;
/*
1   2   3   ...   i 
1  -1   1         1  ��λ����x = 6
s[i] >= 0  4 6  ǰ׺�� 
j ... i
s[j] <= s[i]  j <= i
s[3] = -5
s[5] = -3

[3, 5] +2
ö��i 1~n
ö��j <= i
ͳ���ж��ٸ�s[j] <= s[i]
sum(s[i], 1) ƫ�� + 10^5
*/

const int N = 2e5 + 10, M = 1e5 + 10;
typedef long long LL;

int n, x;
int s[N], tr[N];

void update(int x, int t) {
	while (x < N) {
		tr[x] += t;
		x += lowbit(x);
	}
}

int sum(int x) {
	int res = 0;
	while (x) {
		res += tr[x];
		x -= lowbit(x);
	}

	return res;
}

int main() {

	cin >> n >> x;
    
    int t1 = 0, t2 = 0;
    for(int i = 1; i <= n; i++){
    	int v;
        cin >> v;
        t1 += v >= x, t2 += v < x;
        s[i] = t1 - t2;
    }
    
    update(M, 1);
    
    LL res = 0;
    for(int i = 1; i <= n; i++){
        res += sum(s[i] + M);
        update(s[i] + M, 1);
    }
	// 0 ---------- 1e5 ---------- 2e5   tr[i]  
    cout << res << endl;
    
	return 0;
}
