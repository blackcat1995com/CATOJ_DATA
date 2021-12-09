#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

typedef long long LL;

const int N = 1e5 + 10;
int n, m, T;
int row[N], col[N], c[N]; 
LL ans = 0;

void calc(int a[], int num){
	memset(c, 0, sizeof(c));
	int ave = T / num;
  
  	for(int i = 2; i <= num; i++)
      	c[i] = c[i - 1] + a[i - 1] - ave;
  
  	sort(c + 1, c + num + 1);
  
  	for(int i = 1; i <= num; i++)
      	ans += abs(c[num + 1 >> 1] - c[i]);
}

int main() {

	scanf("%d%d%d", &n, &m, &T);

	for(int i = 1; i <= T; i++){
		int x, y;
		scanf("%d%d", &x, &y);
		row[x]++, col[y]++;
	}

	bool isrow = !(T % n), iscol = !(T % m);

	if(isrow)
		if(iscol) printf("both ");
		else printf("row "); 
	else
		if(iscol) printf("column ");
		else{
        	printf("impossible\n"); 
          	return 0;
        }
			
	if(isrow)
		calc(row, n);
	if(iscol)
		calc(col, m);

	printf("%lld\n", ans);
	return 0;
}
