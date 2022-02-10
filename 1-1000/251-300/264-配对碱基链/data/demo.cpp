#include<iostream>
#include<cstdio>            
#include<cstring>          
using namespace std;
char a[256];
char b[256];
int main()
{
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	cin.getline(a, 256);
	for (int i = 0; i < strlen(a); ++i)
	{
		if (a[i] == 'A')
		{
			b[i] = 'T';
		}
		else if (a[i] == 'T')
		{
			b[i] = 'A';
		}
		else if (a[i] == 'G')
		{
			b[i] = 'C';
		}
		else if (a[i] == 'C')
		{
			b[i] = 'G';
		}
	}
	cout << b;
	return 0;
}

