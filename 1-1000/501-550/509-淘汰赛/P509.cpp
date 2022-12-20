#include <iostream>
#include <cstdio>
#include <unordered_map>
using namespace std;

const int N = 300;

int n;
int w[N];
unordered_map<int, int> mp;	// ÄÜÁ¦Öµ £º ±àºÅ

void build(int p){
	if(p >= (1 << n)) return;
    
    build(2 * p);
    build(2 * p + 1);
    
    w[p] = max(w[2 * p], w[2 * p + 1]);
}

int main() {

	cin >> n;
    
    for(int i = 0; i < (1 << n); i++){
    	cin >> w[i + (1 << n)];
        mp[w[i + (1 << n)]] = i + 1;
    }
    
    build(1);
    
    cout << mp[min(w[2], w[3])] << endl;
    
	return 0;
}

