#include <iostream>
#include <cstdio>
using namespace std;

const int N = 3e4 + 10;

int n, m;

struct Node{
	int L, R, dat;	// dat ���ֵ
}tr[N * 4];

void pushup(int u){
	tr[u].dat = max(tr[u << 1].dat, tr[u << 1 | 1].dat);
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
    	tr[u].dat = dat;
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
  	if(R > mid) dat = max(dat, query(u << 1 | 1, L, R));
  	return dat;
}

int main() {
  
  	while(~scanf("%d%d", &n, &m)){
        build(1, 1, n);

        for(int i = 1; i <= n; i++){
            int dat;
            scanf("%d", &dat);
            update(1, i, dat);
        }
        
        while(m--){
            char op[2];
            int a, b;
            scanf("%s%d%d", op, &a, &b);
            if(*op == 'U') update(1, a, b);  
            else printf("%d\n", query(1, a, b));     
        }
    }
	
	return 0;
}

