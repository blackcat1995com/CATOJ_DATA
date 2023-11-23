#include <iostream> 
#include <cstring> 
using namespace std; 

const int N = 1e4 + 10;

int V, n, C;
int f[N];

int main(){
	
    cin >> V >> n >> C;
    memset(f, 0x3f, sizeof f);

    f[0] = 0;
    for(int i = 1; i <= n; i++){;
        int v, c;
        cin >> v >> c;
        for(int j = V; j >= 1; j--){
            f[j] = min(f[j], c + f[max(j - v, 0)]);
        }
    }

	int t = C - f[V];
    if(t >= 0) cout << t << endl;
    else cout << "Impossible" << endl;
	
	return 0;
}