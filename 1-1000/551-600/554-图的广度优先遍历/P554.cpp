#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

int n;
int g[N][N];

int q[N];
bool book[N];

void bfs(){
    int hh = 0, tt = -1;
    q[++tt] = 1;
    book[1] = true;
    
    bool is_first = true;
    
    while(hh <= tt){
        int t = q[hh++];
        
        if(is_first){
            cout << t;
            is_first = false;
        }
        else
            cout << "-" << t;
        
        for(int i = 1; i <= n; i++){
            if(!book[i] && g[t][i]){
                q[++tt] = i;
                book[i] = true;
            }
        }
    }
        
}

int main() {
	
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> g[i][j];
    
    bfs();

	return 0;
}


