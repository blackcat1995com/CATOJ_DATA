#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

// ���Ľڵ�
struct Node{
    char ch;
    int L, R;
}node[N];

int idx = 0;
int q[N];

// ����������
// ����������ڵ�ֵ ���ؽڵ���
int buildTree(char ch){
    if(ch == '.') return 0;
    
    int p = ++idx;
    node[p].ch = ch;
    node[p].L = buildTree(cin.get());
    node[p].R = buildTree(cin.get());
    
    return p;
}

// ��Ҷ����
int getLeafNum(int p){
	if(p == 0) return 0;
    if(node[p].L == 0 && node[p].R == 0) return 1;
    return getLeafNum(node[p].L) + getLeafNum(node[p].R);
}

// �����
int getDepth(int p){
	if(p == 0) return 0;
    return max(getDepth(node[p].L), getDepth(node[p].R)) + 1;
}

// �������
void preOrder(int p){
	if(p == 0) return;
    
    cout << node[p].ch;
    preOrder(node[p].L);
    preOrder(node[p].R);
}

// �������
void inOrder(int p){
	if(p == 0) return;
    
    inOrder(node[p].L);
    cout << node[p].ch;
    inOrder(node[p].R);
}

// �������
void postOrder(int p){
	if(p == 0) return;
    
    postOrder(node[p].L);
    postOrder(node[p].R);
    cout << node[p].ch;
}

// �������
void levelTraverse(int p){
    int hh = 0, tt = -1;
    cout << node[p].ch;
    q[++tt] = p;
    
    while(hh <= tt){
        int t = q[hh++];
        if(node[t].L){
            cout << node[node[t].L].ch;
            q[++tt] = node[t].L;
        }
        
        if(node[t].R){
            cout << node[node[t].R].ch;
            q[++tt] = node[t].R;
        }
    }
}

int main() {

    int root = buildTree(cin.get());
    
    cout << getDepth(root) << endl << getLeafNum(root) << endl;
    
    preOrder(root);
    cout << endl;
    
    inOrder(root);
    cout << endl;
    
    postOrder(root);
    cout << endl;
    
    levelTraverse(root);
    cout << endl;
	// cout << root << endl;
    
    // cout << node[1].L << " " << node[1].R << endl;
    
	return 0;
}
