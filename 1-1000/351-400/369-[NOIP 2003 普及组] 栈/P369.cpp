#include <iostream>
#include <cstdio>
using namespace std;

// C(2n,n)/(n+1)
// ��������ͬ��̬�������Ϸ�����ƥ��������͹n���ο��Ի��ֳ������θ��� ��������

typedef long long LL;

const int N = 40;

int n;
LL C[N][N];

int main() {
  
  	cin >> n;
  	
  	for(int i = 0; i <= 2 * n; i++)
    	for(int j = 0; j <= i; j++)
          	if(!j) C[i][j] = 1;
  			else C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
  
  	cout << C[2 * n][n] / (n + 1) << endl;
	
	return 0;
}

