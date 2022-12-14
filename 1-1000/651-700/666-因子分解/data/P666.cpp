#include <iostream>
#include <cstdio>
using namespace std;

bool flag = false;

void work(int n, int k){
    if(n < k) return;
    
    while(n % k) k++;
    
    if(!flag){
        cout << k;
        flag = true;
    }  
    else cout << "*" << k;
        
    int cnt = 0;
    while(n % k == 0){
        n /= k;
        cnt++;
    }
    
    if(cnt != 1) cout << "^" << cnt;
    
    work(n, k + 1);
}

int main() {
    
    freopen("5.in", "r", stdin);
	freopen("5.out", "w", stdout);
	
    int n;
    
    cin >> n;
    
    work(n, 2);


	return 0;
}

