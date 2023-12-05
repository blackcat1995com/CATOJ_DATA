#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	
  	int n;
  	cin >> n;
  	if(n % 3 == 0 && n % 5 == 0) cout << "yes" << endl;
  	else cout << "no" << endl;
  
	return 0;
}

