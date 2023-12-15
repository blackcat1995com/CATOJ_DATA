#include<bits/stdc++.h>
using namespace std;

int main()
{
	int f1, f2, n, cnt=0; 
	cin>>n;
	for(int i=2;i<=1000000;i++)
	{
		f1 = 1;
		for(int j=2;j<=i/j;j++)
		{
			if(i%j==0)
			{
				f1=0;
				break;
			}
		}
		if(f1)
		{
			int temp=0,temp2=i;
			while(temp2>0)
			{
				temp = temp * 10 + temp2%10;
				temp2/=10; 
			}
			f2 = 1;
			for(int j=2;j<=temp/j;j++)
			{
				if(temp%j==0)
				{
					f2 = 0;
					break;
				}
			}
			if(f2)
			{
				cnt++;
				if(n==cnt)
				{
					cout<<i<<endl;
					break;
				}
			}
		}
	}

	return 0;
}

