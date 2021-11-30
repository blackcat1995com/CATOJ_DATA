#include <iostream>
#include <cstdio>
using namespace std;

const int N = 3e4 + 10;

int T, n;

struct Node{
	int L, R, dat;	// dat �����
}tr[N * 4];

void pushup(int u){
	tr[u].dat = tr[u << 1].dat + tr[u << 1 | 1].dat;
}

// ����
void build(int u, int L, int R){
	tr[u] = {L, R};
  	if(L == R) return;
  	
  	int mid = tr[u].L + tr[u].R >> 1;
  
  	build(u << 1, L, mid), build(u << 1 | 1, mid + 1, R);
}

// �޸� ��x����ֵ����Ϊdat
void update(int u, int x, int dat){
	if(tr[u].L == x && tr[u].R == x){
    	tr[u].dat += dat;
      	return;
    }
  
  	int mid = tr[u].L + tr[u].R >> 1;
  	if(x <= mid) update(u << 1, x, dat);
  	else update(u << 1 | 1, x, dat);
  
  	pushup(u);
}

// ��ѯ
int query(int u, int L, int R){
  	// ����߶��������ڱ���ѯ�����ڣ�ֱ�ӷ��ص�ǰ�������ֵ
	if(tr[u].L >= L && tr[u].R <= R) return tr[u].dat;
  
  	int mid = tr[u].L + tr[u].R >> 1;
  	
  	int dat = 0;
  	if(L <= mid) dat = query(u << 1, L, R);
  	if(R > mid) dat += query(u << 1 | 1, L, R);
  	return dat;
}

int main() {
  
  	scanf("%d", &T);

    int idx = 0;
    while(T--){
        scanf("%d", &n);

        build(1, 1, n);
        for(int i = 1; i <= n; i++){
            int t;
            scanf("%d", &t);
            update(1, i, t);
        }

        printf("Case %d:\n", ++idx);
        string op;
        while(cin >> op, op != "End"){
            int a, b;
            scanf("%d%d", &a, &b);

            if(op == "Add") update(1, a, b);
            else if(op == "Sub") update(1, a, -1 * b);
            else {

                printf("%d\n", query(1, a, b));
            }
        }

    }

	return 0;
}
