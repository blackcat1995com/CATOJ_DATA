#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 1e5 + 10;

int n;
int son[N][10], idx;

bool book[N];
char str[10010];

bool insert(const char* str) {
	int p = 0;
	bool matched = false;
	bool have_new_node = false;

	for (int i = 0; str[i]; i++) {
		int u = str[i] - '0';
		if (!son[p][u]) {
			son[p][u] = ++idx;
			have_new_node = true;
		}
		p = son[p][u];
		if (book[p]) matched = true;
	}
	book[p] = true;

	return !matched && have_new_node;
}

int main() {

	int T;
	cin >> T;
	while (T--) {
		memset(son, 0, sizeof son);
		memset(book, 0, sizeof book);
		idx = 0;

		cin >> n;
		bool flag = true;
		while (n--) {
			cin >> str;
			if (!insert(str)) flag = false;
		}
		if (flag) puts("YES");
		else puts("NO");
	}
	return 0;
}


