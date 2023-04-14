#include <iostream>
#define lowbit(x) x & -x
using namespace std;

const int N = 5e5 + 10;

int n, m;
int tr[N];

void update(int x, int t) {
	while (x <= n) {
		tr[x] += t;
		x += lowbit(x);
	}
}

int sum(int x) {
	int res = 0;
	while (x) {
		res += tr[x];
		x -= lowbit(x);
	}

	return res & 1;
}

int main() {

    cin >> n >> m;
    
    while(m--){
        int t, a, b;
        cin >> t;
        if(t == 1){
            cin >> a >> b;
            update(a, 1), update(b + 1, -1);
        }
        else{
            cin >> a;
            cout << sum(a) << endl;
        }
    }

	return 0;
}
