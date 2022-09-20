#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

const int N = 110;

int n, m;
double g[N][N];
int S, T;

int a[N][2];

double calc(int p1, int p2){
	double t1 = pow(a[p1][0]-a[p2][0], 2);
  	double t2 = pow(a[p1][1]-a[p2][1], 2);
  	return sqrt(t1 + t2);
}

int main() {
  
  	cin >> n;
  
  	for(int i = 1; i <= n; i++) cin >> a[i][0] >> a[i][1];
  
  	cin >> m;
  	
  	for(int i = 1; i <= n; i++)
         for(int j = 1; j <= n; j++)
           	g[i][j] = 1e8;
  	
  	
  	while(m--){
    	int p1, p2;
      	cin >> p1 >> p2;
      	g[p1][p2] = g[p2][p1] = calc(p1, p2);
    }
  
  	cin >> S >> T;
  
  	// Floyd Ä£°å
  	for(int k = 1; k <= n; k++)
      	for(int i = 1; i <= n; i++)
          	for(int j = 1; j <= n; j++)
              	g[i][j] = min(g[i][j], g[i][k] + g[k][j]);	// ËÉ³Ú²Ù×÷
  
  	printf("%.2lf\n", g[S][T]);
	
	return 0;
}
