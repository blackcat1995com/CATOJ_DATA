#include <iostream>
#include <cstdio>
using namespace std;

int ans;

void work(int n, int pre){
	for(int i = 2; i <= n / i; i++){
    	if(n % i == 0 && i >= pre && n / i >= pre){
        	ans++;
          	work(n / i, i);
        }
    }
}

int main() {
  
  	int n;
  	cin >> n;
  	
  	while(n--){
    	int x;
      	cin >> x;
      	ans = 1;
      	work(x, 2);
      	cout << ans << endl;
    }

	return 0;
}

