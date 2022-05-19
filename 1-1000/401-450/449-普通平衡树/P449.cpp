#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e5 + 10, INF = 0x3f3f3f3f;

int n;

struct Node{
	int L, R;
	int key, val;
	int cnt, size;
}tr[N];

int root = 0, idx = 0;

void pushup(int p){
	tr[p].size = tr[tr[p].L].size + tr[tr[p].R].size + tr[p].cnt;
}

int new_node(int key){
	++idx;
	tr[idx].key = key, tr[idx].val = rand(), tr[idx].cnt = tr[idx].size = 1;
	return idx;
}

void zig(int& p){
	int q = tr[p].L;
	tr[p].L = tr[q].R;
	tr[q].R = p;
	p = q;
	pushup(tr[p].R), pushup(p);
}

void zag(int& p){
	int q = tr[p].R;
	tr[p].R = tr[q].L;
	tr[q].L = p;
	p = q;
	pushup(tr[p].L), pushup(p);
}

void build(){
	new_node(-INF), new_node(INF);
	root = 1, tr[1].R = 2;
	pushup(root);
	if(tr[1].val < tr[2].val) zag(root);
}

void insert(int& p, int key){
	if(!p) p = new_node(key);
	else if(key == tr[p].key) tr[p].cnt++;
	else if(key < tr[p].key){
		insert(tr[p].L, key);
		if(tr[tr[p].L].val > tr[p].val) zig(p);
	}
	else{
		insert(tr[p].R, key);
		if(tr[tr[p].R].val > tr[p].val) zag(p);
	}
	pushup(p);
}

void del(int& p, int key){
	if(!p) return;
	if(key == tr[p].key){
		if(tr[p].cnt > 1) tr[p].cnt--;
		else if(tr[p].L || tr[p].R){
			if(!tr[p].R || tr[tr[p].L].val > tr[tr[p].R].val){
				zig(p);
				del(tr[p].R, key);
			}
			else{
				zag(p);
				del(tr[p].L, key);
			}
		}
		else p = 0;
	}

	if(key < tr[p].key) del(tr[p].L, key);
	else del(tr[p].R, key);

	pushup(p);
}

int get_rank_by_key(int p, int key){
	if(!p) return 0;
	if(key == tr[p].key) return tr[tr[p].L].size + 1;
	if(key < tr[p].key) return get_rank_by_key(tr[p].L, key);
	return tr[tr[p].L].size + tr[p].cnt + get_rank_by_key(tr[p].R, key);
}

int get_key_by_rank(int p, int rank){
	if(!p) return INF;

	if(tr[tr[p].L].size >= rank) return get_key_by_rank(tr[p].L, rank);
	else if(tr[tr[p].L].size + tr[p].cnt >= rank) return tr[p].key;
	return get_key_by_rank(tr[p].R, rank - tr[tr[p].L].size - tr[p].cnt);
}

int get_prev(int p, int key){
	if(!p) return -INF;
	if(key <= tr[p].key) return get_prev(tr[p].L, key);
	return max(tr[p].key, get_prev(tr[p].R, key));
}

int get_next(int p, int key){
	if(!p) return INF;
	if(key >= tr[p].key) return get_next(tr[p].R, key);
	return min(tr[p].key, get_next(tr[p].L, key));
}

int main() {

	build();

	cin >> n;

	while(n--){
		int op, x;
		cin >> op >> x;
		if(op == 1) insert(root, x);
		else if(op == 2) del(root, x);
		else if(op == 3) cout << get_rank_by_key(root, x) - 1 << endl;
		else if(op == 4) cout << get_key_by_rank(root, x + 1) << endl;
		else if(op == 5) cout << get_prev(root, x) << endl;
		else cout << get_next(root, x) << endl;
	}
	
	return 0;
}


