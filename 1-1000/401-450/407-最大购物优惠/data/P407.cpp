#include<iostream>
#include<algorithm>
#include<fstream>
using namespace std;
const int N=510;
int w[N],v[N],p[N];
int f[N][N][N];
int main()
{
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	//freopen("shopping.in","r",stdin);
	int W,V,n;
	cin>>W>>V>>n;
	for(int i=1;i<=n;i++) cin>>w[i]>>v[i]>>p[i];
	//求最短路，从后往前推 
	for(int i=n;i>=1;i--){
		for(int j=0;j<=W;j++)
			for(int k=0;k<=V;k++){
				f[i][j][k]=f[i+1][j][k];
				if(j>=w[i] && k>=v[i])
					f[i][j][k]=max(f[i][j][k],f[i+1][j-w[i]][k-v[i]]+p[i]);
				}
	}
	cout<<f[1][W][V]<<endl;
	//字典序向后推 
	int j=W,k=V;
	for(int i=1;i<=n;i++)
		if(j>=w[i] && k>=v[i] && f[i][j][k]==f[i+1][j-w[i]][k-v[i]]+p[i]){
			cout<<i<<' ';
			j-=w[i],k-=v[i];
		}
	puts("");
	return 0;
} 
