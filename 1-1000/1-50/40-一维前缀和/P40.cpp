#include <iostream>
using namespace std;

const int N = 1e6 + 10;

int n, m;
int s[N];

int main() {

	cin >> n >> m;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        s[i] = s[i - 1] + x;
    }
    
    while(m--){
        int L, R;
        cin >> L >> R;
        cout << s[R] - s[L - 1] << endl;
    }
    
	return 0;
}
