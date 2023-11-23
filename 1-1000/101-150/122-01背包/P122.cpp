#include <iostream>  
using namespace std; 

/*
	状态表示：f[i][j] 表示前i种物品可选，背包容量为j时的所有方案
	属性：所有方案中价值最大的 max
	状态转移：f[i][j] = max(f[i - 1][j], c + f[i - 1][j - w]);
*/

int m, n;
int f[35][210];

int main(){
	
	cin >> m >> n;
	for(int i = 1; i <= n; i++){
		int w, c;
		cin >> w >> c;
		for(int j = 1; j <= m; j++){
			// 装不下
			if(j < w)
				f[i][j] = f[i - 1][j];
			// 装得下
			else
				f[i][j] = max(f[i - 1][j], c + f[i - 1][j - w]);
		}
	}
	
	cout << f[n][m] << endl;

	return 0;
}