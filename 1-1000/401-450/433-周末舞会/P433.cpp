#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;
queue<int> que1;
queue<int> que2;
int m, n, k;
int main() {
	// freopen("xxx.in", "r", stdin);
	// freopen("xxx.out", "w", stdout);
    cin >> m >> n >> k;
    for(int i=1;i<=m;i++)
        que1.push(i);

    for(int i=1;i<=n;i++)
        que2.push(i);

    for(int i=1;i<=k;i++){
        int a = que1.front();
        int b = que2.front();

        cout << a << " " << b << endl;

        que1.pop();
        que2.pop();

        que1.push(a);
        que2.push(b);
    }
	// fclose(stdin);
	// fclose(stdout);

	return 0;
}
