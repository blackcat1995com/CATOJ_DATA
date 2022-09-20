#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

const int N = 110;
int n, S;
int g[N][N];


int main() {
  
  	cin >> n >> S;
  
  	memset(g, 0x3f, sizeof g);
  	for(int i = 1; i <= n; i++)
      	for(int j = 1; j <= n; j++){
        	string str;
          	cin >> str;
          	if(str != "-") g[i][j] = stoi(str);
        }
  
  	
	// Floyd Ä£°å
  	for(int k = 1; k <= n; k++)
      	for(int i = 1; i <= n; i++)
          	for(int j = 1; j <= n; j++)
              	g[i][j] = min(g[i][j], g[i][k] + g[k][j]);	// ËÉ³Ú²Ù×÷
  
  	for(int i = 1; i <= n; i++)
      	if(i != S)
          	printf("(%d -> %d) = %d\n", S, i, g[S][i]);
  
	return 0;
}

