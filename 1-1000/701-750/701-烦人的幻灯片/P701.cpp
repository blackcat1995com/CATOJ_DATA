#include<cstring>
#include<cmath>
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
long a[5001][5001],ans[5001],f[5001];
long xmin[5001],xmax[5001],ymin[5001],ymax[5001];
bool b[501];
char s[5001];
int main()
{
	long n,m,i,j,k,x,y,l;
	bool bo,boo;
	memset(b,true,sizeof(b));
	memset(a,0,sizeof(a));
	memset(f,0,sizeof(f));
	cin>>n; 
	for (i=1; i<=n; i++){
		cin>>xmin[i]>>xmax[i]>>ymin[i]>>ymax[i];
	}
	for (i=1; i<=n; i++){
		cin>>x>>y;
		for (j=1; j<=n; j++)
		if((x>=xmin[j])&&(x<=xmax[j])&&(y>=ymin[j])&&(y<=ymax[j]))
		{
			a[i][0]++; a[i][a[i][0]]=j;
			f[j]++;  }
	}
	boo=true;
	for (k=1; k<=n; k++)
	{
	    bo=false;
	    for (i=1; i<=n; i++)
		if (b[i]==true){
		    for (j=1; j<=a[i][0]; j++)
		        if (f[a[i][j]]==1){
				  for (l=1; l<=a[i][0]; l++) f[a[i][l]]--;
				  bo=true; ans[i]=a[i][j]; b[i]=false;
				  break;
			    } 
		    if (bo==true)  break;
		    if (i==n) boo=false;
		}
		if(boo==false) break;
	}   
	for (i=1; i<=n; i++) s[i]=i+64;
	if (boo==false)  cout<<"None";
	  else for(i=1; i<=n; i++) cout<<s[i]<<" "<<ans[i]<<endl;
}
