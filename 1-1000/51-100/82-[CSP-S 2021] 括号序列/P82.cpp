#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

typedef long long LL;

const int N = 510, MOD = 1e9 + 7;
int n, k;
int T[N][N];	// ≈–∂œ[i,j]«¯º‰ «∑Ò»´ «*
char s[N];
LL f[N][N], g[N][N];	// f◊Û”“¿®∫≈∆•≈‰((**)***()) g◊Û”“¿®∫≈≤ª∆•≈‰()*(**)

int ne[N];
LL sum[N];

int main() {
  
  	cin >> n >> k;
    cin >> s + 1;
  
  	// ‘§¥¶¿ÌT[i][j]
  	for(int i = 1; i <= n; i++){
      	ne[i] = i;
    	for(int j = i; j <= n; j++){
        	if(s[j] == '*' || s[j] == '?') T[i][j] = 1, ne[i] = j + 1;
          	else break;
        }
    }
  
  	// len = 2  ()
  	for(int L = 1; L <= n - 1; L++){
    	int R = L + 1;
      	if((s[L] == '(' || s[L] == '?') && (s[R] == ')' || s[R] == '?'))
          	f[L][R] = 1;
    }
  
  	for(int len = 3; len <= n; len++){
    	for(int L = 1; L + len - 1 <= n; L++){
        	int R = L + len - 1;
            if(!((s[L] == '(' || s[L] == '?') && (s[R] == ')' || s[R] == '?'))) continue;
          	// (S) (***)
          	if(R - L - 1 <= k) f[L][R] += T[L + 1][R - 1];
          
          	// (A) ((**)*())  ((**))
          	f[L][R] = (f[L][R] + (f[L + 1][R - 1] + g[L + 1][R - 1]) % MOD) % MOD;
          
          	// (SA) (***())
          	for(int i = 1; i <= k && L + i + 1 <= R - 2; i++){
            	if(T[L + 1][L + i])
                  	f[L][R] = (f[L][R] + (f[L + i + 1][R - 1] + g[L + i + 1][R - 1]) % MOD) % MOD;       
            }
          
          	// (AS) (()***)
          	for(int i = 1; i <= k && R - i - 1 >= L + 2; i++){
            	if(T[R - i][R - 1])
                  	f[L][R] = (f[L][R] + (f[L + 1][R - i - 1] + g[L + 1][R - i - 1]) % MOD) % MOD;
            }
          
          	// AB ASB 
          	// ()***()***()
          	/*
          	for(int i = L + 1; i <= R - 2; i++){
            	for(int j = i + 1; j <= R - 1 && j - i - 1 <= k; j++){
                	if(j == i + 1 || T[i + 1][j - 1])	// AB
                      	g[L][R] = (g[L][R] + (((f[L][i] + g[L][i]) % MOD) * (f[j][R] % MOD)) % MOD) % MOD;
                  	// else if()
                      	// g[L][R] = (g[L][R] + (((f[L][i] + g[L][i]) % MOD) * (f[j][R] % MOD)) % MOD) % MOD; 
                }
            }
            */
          	memset(sum, 0, sizeof sum);
          	for(int j = L + 2; j <= R - 1; j++)
              	sum[j] = (sum[j - 1] + f[j][R]) % MOD;
          
          	for(int i = L + 1; i <= R - 2; i++){
            	int endj = min(min(R - 1, i + k + 1), ne[i + 1]);
              	g[L][R] = (g[L][R] + ((((f[L][i] + g[L][i]) % MOD) * (sum[endj] - sum[i])) % MOD)) % MOD;
            }
        }
    }
  	
	cout << (f[1][n] + g[1][n]) % MOD << endl;
  
	return 0;
}


