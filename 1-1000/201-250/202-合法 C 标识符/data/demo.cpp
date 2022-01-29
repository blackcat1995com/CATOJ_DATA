#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char s[21];
int main()
{
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	bool legal = true;
	cin.getline(s, 21);
	for (int i = 0; i < strlen(s); ++i)
	{
		if (s[0] >= '0' && s[0] <= '9')
		{
			legal = false;
			break;
		}
		if ((s[i] >= 'a'&& s[i] <= 'z') || (s[i] >= 'A'&& s[i] <= 'Z')
			|| (s[i] >= '0'&& s[i] <= '9') || s[i] == '_')
		{
		}
		else
		{
			legal = false;
			break;
		}
	}
	if (legal)
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	return 0;
}
