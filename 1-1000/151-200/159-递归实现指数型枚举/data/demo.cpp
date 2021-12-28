#include <iostream>
using namespace std;

const int N = 20;
int n;
bool book[N];
// u�ǵ�ǰö�ٵ�������state�Ƕ���������¼��Щ����ѡ
void dfs(int step) {
    if (step == n + 1) {
        for (int i = 1; i <= n; i ++)
            if(book[i])
                cout << i<< " ";
            cout << endl;
        return ;
    }

	book[step] = true;
    dfs (step + 1);  // ����u�����
    
    book[step] = false;
    dfs (step + 1); // ��u�����
}

int main() {
	
	freopen("6.in", "r", stdin);
	freopen("6.out", "w", stdout);
    cin >> n;
    dfs(1);
    return 0;
}


