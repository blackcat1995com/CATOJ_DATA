#include <iostream>
#include <cstdio>
using namespace std;

const int N = 210;
typedef pair<int, int> PII;

int n, A, B;
int k[N];
PII q[N];

bool book[N];

int bfs(){
    int hh = 0, tt = -1;
    q[++tt] = {A, 0};
    book[A] = true;
    
    while(hh <= tt){
        PII t = q[hh++];
        
        int cur = t.first, step = t.second;
        
        int up = cur + k[cur], down = cur - k[cur];
        
        if(up <= n && !book[up]){
            q[++tt] = {up, step + 1};
            book[up] = true;
        }
        
        if(down >= 1 && !book[down]){
            q[++tt] = {down, step + 1};
            book[down] = true;
        }
        
        if(up == B || down == B) return q[tt].second;
    }
    
    return -1;
}

int main() {

	cin >> n >> A >> B;
    
    for(int i = 1; i <= n; i++) cin >> k[i];
    
    if(A == B){
        cout << 0 << endl;
        return 0;
    }
    
    cout << bfs() << endl;
    
	return 0;
}
}
}
}
