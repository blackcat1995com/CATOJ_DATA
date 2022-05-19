#include <iostream>
#include <cstdio>
using namespace std;

const int N = 3e4 + 10;

// ����߶����ṹ��
struct Node{
	int L, R, dat;	// dat ����[L, R]�������ֵ
}tr[N * 4];

// ���� ���� build(1, 1, N)
void build(int u, int L, int R){
	tr[u] = {L, R};
  
  	// �������� ��Ҷ�ӽڵ�
  	if(L == R) return;
  
  	int mid = tr[u].L + tr[u].R >> 1;
  
  	// ���ν�����������������
  	build(u << 1, L, mid), build(u << 1 | 1, mid + 1, R);
}

void pushup(int u){
	tr[u].dat = max(tr[u << 1].dat, tr[u << 1 | 1].dat);
}

// ������£���xλ�����ݸ���Ϊdat������build(1, 7, 1)
void update(int u, int x, int dat){
	// ֻ�е�Ҷ�ӽڵ�[x,x]���ſ����޸�
  	if(tr[u].L == x && tr[u].R == x){
    	tr[u].dat = dat;
      	return;
    }
  
  	int mid = tr[u].L + tr[u].R >> 1;
  	if(x <= mid) update(u << 1, x, dat);
  	else update(u << 1 | 1, x, dat);
  	
  	pushup(u);
}

// �����ѯ ���� query(1, 2, 8)
int query(int u, int L, int R){
	// ����߶����ڵ�����������ȫ�����ڱ�ѯ������[L, R]
  	if(tr[u].L >= L && tr[u].R <= R) return tr[u].dat;
  
  	int mid = tr[u].L + tr[u].R >> 1;
  	
  	int res = 0;
  	if(L <= mid) res = query(u << 1, L, R);
  	if(R > mid) res = max(res, query(u << 1 | 1, L, R));
  
  	return res;
}

int main() {
  
  	int n, m;
  	while(~scanf("%d%d", &n, &m)){
      	
      	// ����
      	build(1, 1, n);
      	
      	// ��ʼֵ
    	for(int i = 1; i <= n; i++){
        	int t;
          	scanf("%d", &t);
          	update(1, i, t);
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

