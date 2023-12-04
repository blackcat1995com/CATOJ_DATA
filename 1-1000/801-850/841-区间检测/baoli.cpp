#include <iostream>  
#include <cstring>
#include <set>
using namespace std; 

const int N = 1e6 + 10;

int n, m;
int a[N];
bool book[N];

int main(){
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	while(m--){
		int L, R;
		cin >> L >> R;
		memset(book, 0, sizeof book);
		bool flag = false;
		for(int i = L; i <= R; i++) {
			if(book[a[i]]) {
				flag = true;
				break;
			}
			book[a[i]] = true;
		}
		if(flag) cout << 0 << endl;
		else cout << 1 << endl;
	}
	return 0;
}