#include <iostream>
using namespace std;
int main( ) {

	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++) 
		{//��һ�� ��n��   i+j�ĺ͵���n+1 
			if(i==1||i==n||i+j==n+1)	
				cout<<"*";
			else 
				cout<<" ";
		}
	cout<<endl;
	}
return 0;
}
