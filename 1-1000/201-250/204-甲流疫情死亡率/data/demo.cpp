#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	int a, b;
	cin >> a >> b;
	double death = b / (double)a * 100;
	printf("%.3lf%%", death);
	return 0;
}
