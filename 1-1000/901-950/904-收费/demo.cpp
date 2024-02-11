#include <iostream>
#include <cstdio>
#include <algorithm>>
using namespace std;


int main() {

	double w;
	cin >> w;
	
	double res;
	if(w <= 20) 
		res = 1.68 * w;
	else
		res = 1.98 * w;
		
	printf("%.2lf", res);
	
	return 0;
}

