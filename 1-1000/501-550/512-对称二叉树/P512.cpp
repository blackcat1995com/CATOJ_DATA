#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 110;

struct Node{
    char ch;
    int left, right;
}node[N];

char str[N];

bool flag = true;

// 以p为根的子树是否是对称二叉树
bool check(int p){
    if(!p) return true;
    
    if(!node[p].left && !node[p].right) return true;
    
    if((node[p].left && !node[p].right) || (!node[p].left && node[p].right)){
        flag = false;
        return false;
    }
    
    return check(node[p].left) && check(node[p].right);
}

int main() {

    cin >> str + 1;
    int len = strlen(str + 1);
    
    for(int i = 1; i <= len; i++){
        if(str[i] != '#'){
            int a = 0, b = 0;
            if(2 * i <= len && str[2 * i] != '#')
                a = 2 * i;
            if(2 * i + 1 <= len && str[2 * i + 1] != '#')
                b = 2 * i + 1;
            node[i] = {str[i], a, b};
        }
    }
    
    check(1);
    
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

	return 0;
}

