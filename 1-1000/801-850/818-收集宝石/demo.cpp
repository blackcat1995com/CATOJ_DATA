#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

int n, m;
bool g[N][N], p[N];

int res = 0;

void dfs(int u, int sum){
    
    /*
    	��֦��ö�ٵ���u����ʯ��ѡ��ʯ��Ϊsum����ʹ�Ѻ������б�ʯ��n-u����ѡ�У�
        ��С��֮ǰ�����ֵres���������֦������
    */
    if(res > sum + n - u) return;
    
    if(u > n){
        res = max(res, sum);
        return;
    }
    
    bool is_conflict = false;
    for(int i = 1; i < u; i++){
        if(p[i] && g[i][u]){
            is_conflict = true;
            break;
        }
    }
    
    if(!is_conflict){
        p[u] = true;
        dfs(u + 1, sum + 1);
    }
    
    p[u] = false;
    
    dfs(u + 1, sum);
}
    
int main() {
    
    cin >> n >> m;
    
    while(m--){
        int a, b;
        cin >> a >> b;
        g[a][b] = g[b][a] = true;
    }
    
    dfs(1, 0);
    
    cout << res <<endl;

	return 0;
}
