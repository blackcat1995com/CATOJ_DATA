#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 110;

struct Node{
    int w, v;
    double per_value;

    bool operator< (const Node &x) const{
        return per_value > x.per_value;
    }
}node[N];


int main() {

	freopen("5.in", "r", stdin);
	freopen("5.out", "w", stdout);
    int k;
    scanf("%d", &k);

    while(k--){
        int m, n;
        scanf("%d%d", &m, &n);
        for(int i = 1; i <= n; i++){
            scanf("%d%d", &node[i].w, &node[i].v);
            node[i].per_value = node[i].v * 1.0 / node[i].w;
        }

        sort(node + 1, node + n + 1);

        double total = 0;
        for(int i = 1; i <= n; i++){
            if(m - node[i].w > 0){
                m -= node[i].w;
                total += node[i].v;
            }
            else{
                total += m * node[i].per_value;
                break;
            }
        }

        printf("%.2lf\n", total);
    }

	return 0;
}
