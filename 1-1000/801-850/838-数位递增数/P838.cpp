#include <iostream>  
#include <string>
using namespace std; 

bool check(int n){
	string str = to_string(n);
	for(int i = 0; i < str.size(); i++){
		if(i >= 1){
			if(str[i] < str[i - 1])
				return false;
		}
	}
	return true;
}

int main(){
	
	int n;
	cin >> n;

	int res = 0;

	for(int i = 11; i <= n; i++){
		if(check(i))
			res++;
	}

	cout << res << endl;
	
	return 0;
}