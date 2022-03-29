#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

const int N = 1e8 + 10;

bool book[N];

vector<int> get_primes(int n){
  
  	vector<int> v;
  
	for(int i = 2; i <= n; i++){
    	if(!book[i]) v.push_back(i);
        	
        for(int j = 0; v[j] <= n / i; j++){
            book[v[j] * i] = true;
            if(i % v[j] == 0) break;
        }
    }
  
  	return v;
}

int main() {
  
  	int n, q;
  	cin >> n >> q;
  	
  	auto primes = get_primes(n);

  	while(q--){
  		int t;
  		scanf("%d", &t);
  		cout << primes[t - 1] << endl;
  	}
	
	return 0;
}
