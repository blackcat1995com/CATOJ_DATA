#include <iostream>
#include <cstdio>
using namespace std;

const int N = 1e5 + 10;

typedef long long LL;
typedef pair<int, int> PII;

int n, k;
PII q[N];

bool check(int x){
    LL res = 0;
    for(int i = 1; i <= n; i++)
        res += (LL)(q[i].first / x) * (q[i].second / x);
    return res >= k;
}

int main() {
 
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        int h, w;
        cin >> h >> w;
        q[i] = {h, w};
    }
    
    int L = 1, R = N;
    while(L < R){
        int mid = L + R + 1 >> 1;
        if(check(mid)) L = mid;
        else R = mid - 1;
    }
    
    cout << L << endl;
	
	return 0;
}


