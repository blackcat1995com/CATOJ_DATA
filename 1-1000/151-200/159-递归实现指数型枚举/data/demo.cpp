#include <iostream>
using namespace std;

const int N = 20;
int n;
bool book[N];
// u是当前枚举到的数，state是二进制数记录哪些数被选
void dfs(int step) {
    if (step == n + 1) {
        for (int i = 1; i <= n; i ++)
            if(book[i])
                cout << i<< " ";
            cout << endl;
        return ;
    }

	book[step] = true;
    dfs (step + 1);  // 不用u这个数
    
    book[step] = false;
    dfs (step + 1); // 用u这个数
}

int main() {
	
	freopen("6.in", "r", stdin);
	freopen("6.out", "w", stdout);
    cin >> n;
    dfs(1);
    return 0;
}


