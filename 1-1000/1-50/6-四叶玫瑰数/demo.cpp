#include <iostream>
#include <cmath>
using namespace std;

bool check(int n){
	
	if(n < 1000 || n > 9999) 
		return false;
		
	int nn = n;	
	int sum = 0;
	while(n){
		sum += pow(n % 10, 4);
		n /= 10;
	}
	
	return nn == sum;
}

int main() {

	int n, m;
	cin >> n >> m;
	
	for(int i = n; i <= m; i++)
		if(check(i))
			cout << i << " ";
	
	return 0;
}

