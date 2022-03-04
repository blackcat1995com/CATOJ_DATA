#include <iostream>
#include <cstdio>
using namespace std;

const int N = 5e6 + 10;

typedef pair<int, int> PII;

bool h[N];
PII q[N];

int main() {
  
  	int n;
  	cin >> n;
  
  	for(int c = 0; c * c <= n; c++)
      	for(int d = c; c * c + d * d <= n; d++){
        	int s = c * c + d * d;
          	if(!h[s]){
            	h[s] = true;
              	q[s] = {c, d};
            }
        }
  
  	for(int a = 0; a * a <= n; a++)
      	for(int b = a; a * a + b * b <= n; b++){
        	int s = n - a * a - b * b;
          	if(h[s]){
            	printf("%d %d %d %d\n", a, b, q[s].first, q[s].second);
              	return 0;
            }
        }
	
	return 0;
}
