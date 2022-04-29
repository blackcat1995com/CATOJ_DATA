
#include<iostream>
using namespace std;
int main()
{
	char a[7]={'D','C','B','A','D'};
	
	string b;
	
	int sum=0;
	
	cin>>b;
	
	for(int i=0;i<5;i++)
	{
		if(b[i]=a[i])
		{
			sum+=30;
		}
	}
	
	cout<<sum;
	
	return 0;

}
