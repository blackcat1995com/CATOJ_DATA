#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

string words[10001];
int n = 1;
int main() {
	freopen("word.in", "r", stdin);
	freopen("word.out", "w", stdout);
	while (cin >> words[n]) {
		n++;
	}
	n--;
	sort(words + 1, words + n + 1);
	int sum = words[1].length();
	for (int i = 2; i <= n; i++) {
		int j;
		for (j = 0; j < words[i - 1].length(); j++) {
			if (words[i][j] != words[i - 1][j])
				break;
		}
		sum += words[i].length() - j;
	}

	cout << sum + 1;
	fclose(stdin);
	fclose(stdout);
	return 0;
}