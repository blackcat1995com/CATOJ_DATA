#include <iostream>
#include <cstdio>
using namespace std;

typedef long long LL;
const int N = 510, MOD = 1e9 + 7;
int n, k;
int T[N][N]; // T[i][j] 判断[i,j]区间是否全是*
char s[N];
LL f[N][N], g[N][N]; // f左右括号匹配((**)*())  g左右括号不匹配(*)**()

int main() {

	cin >> n >> k;
	cin >> s + 1;
	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j++){
			if(s[j] == '*' || s[j] == '?') T[i][j] = 1;
			else break;
		}
	}

	// len == 2 的情况 ()
	for(int L = 1; L <= n - 1; L++){
		int R = L + 1;
		if((s[L] == '(' || s[L] == '?') && (s[R] == ')' || s[R] == '?'))
			f[L][R] = 1;
	}	

	for(int len = 3; len <= n; len++){
		for(int L = 1; L + len - 1 <= n; L++){
			int R = L + len - 1;
			if(!((s[L] == '(' || s[L] == '?') && (s[R] == ')' || s[R] == '?'))) continue;
			// if(!(s[L] == '(' || s[L] == '?') && (s[R] == ')' || s[R] == '?')) continue;
			// (S) (***)
			if(R - L - 1 <= k) f[L][R] += T[L + 1][R - 1];
			// (A)  ((*)) ((*)**(***))
			f[L][R] = (f[L][R] + (f[L + 1][R - 1] + g[L + 1][R - 1]) % MOD) % MOD;
			// (SA) (***(*)**(****))

			for(int i = 1; i <= k && L + i + 1 <= R - 2; i++){
				if(T[L + 1][L + i])
					f[L][R] = (f[L][R] + (f[L + i + 1][R - 1] + g[L + i + 1][R - 1]) % MOD) % MOD;	
			}

			// (AS) (()***)  (()()****)
			for(int i = 1; i <= k && R - i - 1 >= L + 2; i++){
				if(T[R - i][R - 1])
					f[L][R] = (f[L][R] + (f[L + 1][R - i - 1] + g[L + 1][R - i - 1]) % MOD) % MOD;
			}

			// AB ASB g[L][R]
			// (*)***()*(**)  (*)***(**) 左边一定是f 右边f和g都可以
			for(int i = L + 1; i <= R - 2; i++){
				for(int j = i + 1; j <= R - 1 && j - i - 1 <= k; j++){
					if(j == i + 1)
						g[L][R] = (g[L][R] + (((f[L][i] + g[L][i]) % MOD) * f[j][R]) % MOD) % MOD;
					else
						if(T[i + 1][j - 1])
							g[L][R] = (g[L][R] + (((f[L][i] + g[L][i]) % MOD) * f[j][R]) % MOD) % MOD;
				}
			}
		}
	}

	cout << (f[1][n] + g[1][n]) % MOD << endl;

	return 0;
}


