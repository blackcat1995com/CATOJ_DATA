#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	
	freopen("2.in", "r", stdin);
	freopen("2.out", "w", stdout);
	
	int x, a, y, b;
	cin >> x >> a >> y >> b;
	double z;
	z = (y*b-x*a)*1.0 / (b-a);
	printf("%.2f", z); 
	return 0;
}
