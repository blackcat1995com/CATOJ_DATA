#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e6;

int D, n;
int res;

bool book[N];

void drop(int k){
    // 判断到达叶子节点
    if(k >= (1 << (D - 1)) && k < (1 << D)){
        res = k;
        return;
    }
    
    if(book[k]){
        book[k] = false;
        drop(2 * k + 1);
    }
    else{
		book[k] = true;
        drop(2 * k);
    }
}

int main() {

    cin >> D >> n;
    
    for(int i = 1;  i <= n; i++) drop(1);
    
    cout << res << endl;

	return 0;
}

