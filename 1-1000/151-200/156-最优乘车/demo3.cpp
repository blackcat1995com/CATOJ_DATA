#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;

const int N = 510, M = 110, INF = 0x3f3f3f3f;

int m, n;
int g[N][N];
int dis[N];
int q[N];
bool book[N];

void bfs() {

    memset(dis, 0x3f, sizeof dis);
    dis[1] = 0;

    int hh = 0, tt = -1;
    q[++tt] = 1;
  	book[1] = true;

    while (hh <= tt) {
        int t = q[hh++];

        for (int i = 1; i <= n; i++)
            if (g[t][i] && dis[i] > dis[t] + 1 && !book[i]) {
                dis[i] = dis[t] + 1;
                q[++tt] = i;
            }
    }
}

int main() {
    
    scanf("%d%d\n", &m, &n);
    
    while(m--){
        string line;
        vector<int> v;
        getline(cin, line);
        stringstream ssin(line);
        
        int p = 0;
        while(ssin >> p) v.push_back(p);

        for(int i = 0; i < v.size(); i++)
        	for(int j = i + 1; j < v.size(); j++)
        		g[v[i]][v[j]] = 1;	
    }
    
    bfs();

    if (dis[n] == INF) puts("NO");
    else cout << max(dis[n] - 1, 0) << endl;

   
	return 0;
}

