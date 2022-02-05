#include<iostream>
using namespace std;
int main()
{
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);

	int n;
	cin>>n;
	while(n>0)
	{
		cout<<n%10<<" ";
		n=n/10;
	}
	return 0;
 } 
