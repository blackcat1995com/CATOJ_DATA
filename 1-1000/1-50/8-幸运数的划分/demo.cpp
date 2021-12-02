#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int n;
vector<int> v;

bool is_lucky(int x){
	while(x){
		if(x % 10 == 4 || x % 10 == 7)
			x /= 10;
		else
			return false;
	}
	return true;
}

int main() {

	
	scanf("%d", &n);

	for(int i = 1; i <= 1000; i++){
		if(is_lucky(i))
			v.push_back(i);
	}

	for(auto x : v){
		if(n % x == 0){
			puts("YES");
			return 0;
		}
	}

	puts("NO");

	return 0;	
}
