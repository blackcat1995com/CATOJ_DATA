#include <iostream>  
using namespace std; 

const int N = 5e4 + 10;

int C, H;
int f[N];

int main(){
	
	cin >> C >> H;

	while(H--){
		int v;
		cin >> v;
		for(int j = C; j >= v; j--)
			f[j] = max(f[j], v + f[j - v]);
	}

	cout << f[C] << endl;
	
	return 0;
}