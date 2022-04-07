#include <iostream>
using namespace std;

// dp[i][1]����i->N��󲻽������и���
// dp[i][2]�����i��ʼ�������������һ��λ�ã�0����û�к������
// ans������е�Ԫ������
int n, a[201], dp[201][3], ans = 1, start_i = 1;	
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		dp[i][1] = 1;
	}

	for (int i = n - 1; i >= 1; i--) {
		int maxlen = 0, k = 0;
		for (int j = i + 1; j <= n; j++) {
			if (a[i] <= a[j] && dp[j][1] > maxlen) {	// �ҳ���������ν���������г��ȼ���ʼ�±�
				maxlen = dp[j][1];	// ��������г���
				k = j;	//����������±�
			}
		
			if (maxlen) {
				dp[i][1] = maxlen + 1;
				dp[i][2] = k;
				if (dp[i][1] > ans) {
					ans = dp[i][1];
					start_i = i;
				}
			}	
		}
	}

	
	cout << "max=" << ans << endl;

	while (ans--) {
		cout << a[start_i] << " ";
		start_i = dp[start_i][2];
	}
	return 0;
}

/*
14
13 7 9 16 38 24 37 18 44 19 21 22 63 15

max=8
7 9 16 18 19 21 22 63
*/
