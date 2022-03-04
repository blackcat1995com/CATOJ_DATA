#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e5 + 10;

int n;
int a[N], s[N];
int ans = 0;

int main() {

    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    
    for(int i = 1, j = 1; i <= n; i++){
        s[a[i]]++;
        while(s[a[i]] > 1){
            s[a[j]]--;
            j++;
        }
        ans = max(ans, i - j + 1);
    }
	
	cout << ans << endl;
	
	return 0;
}


