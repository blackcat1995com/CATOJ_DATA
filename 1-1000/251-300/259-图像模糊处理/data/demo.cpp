#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int a[1001][1001], b[1001][1001];
int main() {
	
  freopen("10.in", "r", stdin);
  freopen("10.out", "w", stdout);
  
  int n, m;
  cin >> n >> m;
  for (int i=1; i<=n; i++){
    for (int j=1; j<=m; j++){
      cin >> a[i][j];
      b[i][j] = a[i][j];
    }
  }
  for (int i=2; i<=n-1; i++){
    for (int j=2; j<=m-1; j++){
      b[i][j] = round((a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1])/5.0);
    }
  }

  for (int i=1; i<=n; i++){
    for (int j=1; j<=m; j++){
      cout << b[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
