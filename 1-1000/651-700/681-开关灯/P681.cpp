#include <iostream>
#include <cstdio>
using namespace std;

const int N = 5005;

int n, m, res = 0;
bool a[N];

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    cin >> n >> m;
    
    for(int i = 2; i <= m; i++){
        for(int j = 1; j <= n; j++)
        	if(j % i == 0)
            	a[j] = !a[j];
    }
    
    bool is_first = true;
    for(int i = 1; i <= n; i++){
        if(!a[i]){
            if(is_first) {
                cout << i;
                is_first = false;
            }
     		else{
				cout << "," << i;
            }
        }
            
    }
        
   
	return 0;
}


