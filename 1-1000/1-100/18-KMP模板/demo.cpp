#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 1e6 + 10;

char p[N], s[N];
int ne[N];

int main() {

	scanf("%s%s", s + 1, p + 1);

	int slen = strlen(s + 1);
	int plen = strlen(p + 1);
	

	for (int i = 2, j = 0; i <= plen; i++) {
		while (j && p[i] != p[j + 1]) j = ne[j];
		if (p[i] == p[j + 1]) j++;
		ne[i] = j;
	}


	for (int i = 1, j = 0; i <= slen; i++) {
		while (j && s[i] != p[j + 1]) j = ne[j];
		if (s[i] == p[j + 1]) j++;
		if (j == plen) {
			cout << i - plen + 1 << endl;
			j = ne[j];
		}
	}

	for (int i = 1; i <= plen; i++)
		cout << ne[i] << " ";

	return 0;
}



