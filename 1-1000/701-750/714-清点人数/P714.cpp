#include <iostream>
#define lowbit(x) x & -x
using namespace std;

const int N = 5e5 + 10;

int n, k;
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

	return res;
}

int main() {

    cin >> n >> k;
    
    while(k--){
        char op[2];
        int a, b;
        cin >> op;
        if(*op == 'A'){
            cin >> a;
            cout << sum(a) << endl;
        }
        else if(*op == 'B'){
            cin >> a >> b;
            update(a, b);
        }
        else{
            cin >> a >> b;
            update(a, -b);
        }
    }

	return 0;
}
