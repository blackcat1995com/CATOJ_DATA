#include <iostream>
using namespace std;

int n;	// n�����������
int a, b, c;	// ��������ý��ơ����ơ�ͭ������
int suma = 0, sumb = 0, sumc = 0; // ���ơ����ơ�ͭ��������
int sum = 0; // ���н�������
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
