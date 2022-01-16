#include <iostream>
using namespace std;

int n;	// n代表比赛天数
int a, b, c;	// 当天所获得金牌、银牌、铜牌数量
int suma = 0, sumb = 0, sumc = 0; // 金牌、银牌、铜牌总数量
int sum = 0; // 所有奖牌数量
int main() {

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a >> b >> c;
		suma += a;
		sumb += b;
		sumc += c;
	}
	sum = suma + sumb + sumc;
	cout << suma << " " << sumb << " " << sumc << " " << sum;
	return 0;
}
/*
3
1 0 3
3 1 0
0 3 0
*/
