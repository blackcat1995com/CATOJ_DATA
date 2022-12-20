#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

struct Node{
    char ch;
    int left, right;
    int cnt;
}node[110];

int idx = 0;
string pre_string, in_string;

int buildTree(string pre_string, string in_string){
    int len = pre_string.size();
    if(!len) return 0;
    
    char root = pre_string[0];
    int in_root_idx = in_string.find(root);
    
    int p = ++idx;
    node[p].ch = root;
    
    string pre_left_tree = pre_string.substr(1, in_root_idx);
    string in_left_tree = in_string.substr(0, in_root_idx);
    
    node[p].left = buildTree(pre_left_tree, in_left_tree);
    
    string pre_right_tree = pre_string.substr(in_root_idx + 1);
    string in_right_tree = in_string.substr(in_root_idx + 1);
    
    node[p].right = buildTree(pre_right_tree, in_right_tree);
    
    return p;
}   

int getLength(int p){
	if(!p) return 0;
    
    if(!node[p].left && !node[p].right){
        node[p].cnt = 1;
        return 1;
    }
    
    node[p].cnt = getLength(node[p].left) + getLength(node[p].right);
    
    return node[p].cnt;
}

void preOrder(int p){
    if(!p) return;
    
    for(int i = 1; i <= node[p].cnt; i++) cout << node[p].ch;
    cout << endl;
    
    preOrder(node[p].left);
    preOrder(node[p].right);
}

int main() {

	cin >> pre_string >> in_string;
    int root = buildTree(pre_string, in_string);
    
    getLength(root);
    
    preOrder(root);
    // cout << node[1].cnt << endl;
    // cout << root << endl;
    // cout << node[node[1].right].ch << endl;
	return 0;
}

