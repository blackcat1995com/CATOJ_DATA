/*
2 4 6 8 10
3 6 9
8 - 1 = 7
n / pi   n / (pi * pj)
*/

#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;

int n, m, res = 0;
int primes[20];

int main() {
  
  	cin >> n >> m;
  	for(int i = 0; i < m; i++) cin >> primes[i];
  
  	for(int i = 1; i < 1 << m; i++){
    	int t = 1, cnt = 0;
      	for(int j = 0; j < m; j++){
        	if(i >> j & 1){
            	cnt++;
              	if((LL)t * primes[j] > n){
                	t = -1;
                  	break;
                }
              	t *= primes[j];
            }
        }
      	if(t != -1){
        	if(cnt & 1) res += n / t;
          	else res -= n / t;
        }
    }
  
  	cout << res << endl;
	
	return 0;
}

