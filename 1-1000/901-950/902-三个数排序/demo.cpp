#include <iostream>
#include <cstdio>
#include <algorithm>>
using namespace std;

int a[5];

int main() {

	for(int i = 1; i <= 3; i++)
		cin >> a[i];
		
	sort(a + 1, a + 3 + 1);
	
	cout << a[3] << " " << a[2] << " " << a[1] << endl;
		
	return 0;
}

