#include <iostream>
using namespace std;

const int N = 1e6 + 10;

int n, m;
int b[N];

void insert(int L, int R, int c){
    b[L] += c;
    b[R + 1] -= c;
}

int main() {

    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        insert(i, i, x);
    }
    
    while(m--){
        int L, R, c;
        cin >> L >> R >> c;
        insert(L, R, c);
    }
    
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += b[i];
        cout << sum << " ";
    }

	return 0;
}
