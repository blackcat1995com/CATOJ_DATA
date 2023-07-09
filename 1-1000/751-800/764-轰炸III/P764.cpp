#include <iostream>
#include <cstdio>
using namespace std;

const int N = 105;
typedef pair<int, int> PII;

int n, m, x, y;
PII g[N][N];

int main() {
    
	cin >> n >> m >> x >> y;
    
    for(int k = 1; k <= x; k++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = x1; i <= x2; i++){
            for(int j = y1; j <= y2; j++){
                g[i][j].first++;
                g[i][j].second = k;
            }
        }
    }
    
    while(y--){
        int a, b;
        cin >> a >> b;
        if(g[a][b].first)
			cout << "Y" << " " << g[a][b].first << " " << g[a][b].second << endl;
    	else
            cout << "N" << endl;
    }
	return 0;
}

