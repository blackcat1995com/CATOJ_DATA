#include <iostream>  
using namespace std; 

const int N = 1e4 + 10;

int n, m;
int f[N] = {1};

int main(){
	
	cin >> n >> m;

    while(n--){
        int x;
        cin >> x;
        for(int j = m; j >= x; j--)
            f[j] += f[j - x];
    }
	
    cout << f[m] << endl;
    
	return 0;
}
