#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	int g[201][201];
	long long int minl[201];
	bool u[201];
	int n,i,j,k,tot;
	memset(g,0xffffff,sizeof(g));
	cin>>n;
	for (i = 1;i <= n;i++)
		for (j = 1;j <= n;j++)
			cin>>g[i][j];
	for (i = 2;i <= n;i++)
		minl[i] = 0x5ffffff;
	minl[1] = 0;
	minl[0] = 0x5ffffff;
	memset(u,true,sizeof(u));
	for (i = 1;i <= n;i++)
	{
		k = 0;
		for (j = 1;j <= n;j++)
			if ((u[j]) && (minl[j] < minl[k]))
				k = j;
		u[k] = false;
		for (j = 1;j <= n;j++)
			if ((u[j]) && (g[k][j] < minl[j]))
				minl[j] = g[k][j];
	}
	tot = 0;
	for (i = 1;i <= n;i++)
		tot += minl[i];
	printf("%d\n",tot);
	return 0;
}

