#include <iostream>
using namespace std;

const int N = 1010;

int n, m, q;
int b[N][N];

void insert(int x1, int y1, int x2, int y2, int c){
    b[x1][y1] += c;
    b[x2 + 1][y1] -= c;
    b[x1][y2 + 1] -= c;
    b[x2 + 1][y2 + 1] += c;
}

int main() {

    cin >> n >> m >> q;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int x;
            cin >> x;
            insert(i, j, i, j, x);
        }
    }
    
    while(q--){
        int x1, y1, x2, y2, c;
        cin >> x1 >> y1 >> x2 >> y2 >> c;
        insert(x1, y1, x2, y2, c);
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            b[i][j] += b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    
	return 0;
}
