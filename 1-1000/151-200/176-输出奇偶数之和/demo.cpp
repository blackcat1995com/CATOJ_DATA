#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  
  	int n;
  	cin >> n;
  	int sum1 = 0, sum2 = 0;
  	for(int i = 1; i <= n; i++)
		if(i % 2 == 0)
          	sum1 += i;
  		else
          	sum2 += i;
  
  	cout << sum1 << " " << sum2 << endl;
	return 0;
}
