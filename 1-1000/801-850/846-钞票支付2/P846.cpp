#include <iostream>  
#include <cstdio>
#include <map>
using namespace std; 

map<int, int> mp;

int f(int n){
	if(mp[n])
        return mp[n];
	
	int minv = 1e9;

	if(n - 1 > 0)
		minv = min(minv, f(n - 1) + 1);
	if(n - 5 > 0)
		minv = min(minv, f(n - 5) + 1);
	if(n - 11 > 0)
		minv = min(minv, f(n - 11) + 1);

    mp[n] = minv;
	return minv;
}

int main(){
	mp[1] = 1;
	mp[5] = 1;
	mp[11] = 1;

	int n;
	cin >> n;
	cout << f(n) << endl;

	return 0;
}
