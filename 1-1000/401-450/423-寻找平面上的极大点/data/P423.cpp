#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 5e5 + 10;

struct Node{
    int x, y;
    bool book;

    bool operator< (const Node &k) const{
        if(x == k.x) return y < k.y;
        return x < k.x;
    }
}node[N];

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) scanf("%d%d", &node[i].x, &node[i].y);

    sort(node + 1, node + n + 1);

    for(int i = 1; i <= n - 1; i++)
        for(int j = i + 1; j <= n; j++)
            if(node[j].y >= node[i].y){
                node[i].book = true;
                break;
            }
    
    bool is_first = true;

    for(int i = 1; i <= n; i++){
        if(!node[i].book){
            if(is_first){
                is_first = false;
                printf("(%d,%d)", node[i].x, node[i].y);
            }
            else
                printf(",(%d,%d)", node[i].x, node[i].y);
        }
    }

	return 0;
}
