#include <iostream>
using namespace std;
int main( ) {

	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++) 
		{//第一行 第n行   i+j的和等于n+1 
			if(i==1||i==n||i+j==n+1)	
				cout<<"*";
			else 
				cout<<" ";
		}
	cout<<endl;
	}
return 0;
}
