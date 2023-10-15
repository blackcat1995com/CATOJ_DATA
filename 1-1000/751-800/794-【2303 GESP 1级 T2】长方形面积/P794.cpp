#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    int res = 0;
    for(int i = 1; i <= n / i; i++)
    	if(n % i == 0)
    		res++;
    		
	cout << res << endl;
    
    return 0;
}
