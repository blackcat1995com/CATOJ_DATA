#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
using namespace std;

typedef long long LL;
	
int main() {
  
  	int n;
  	cin >> n;
  	
  	while(n--){
  		int x, xx;
  		cin >> x;
  		xx = x;
  		int sum = 0;
  		
  		string str = to_string(x);
  		int len = str.size();
//  		cout << len << endl;
  		while(x){
  			int t = x % 10;
			sum += pow(t, len);
			x /= 10;	
		}	
//		cout << sum << " " << xx << endl;
//  		int a = x % 10, b = x / 10 % 10, c = x / 100;
  		if(sum == xx)
  			cout << "T" << endl;
  		else
  			cout << "F" << endl;
	}
	
	return 0;
}

/*


5
8208
548834
88593477
12345
5432
*/
