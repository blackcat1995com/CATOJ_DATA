#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

const int N = 1010;

int n, m;
int tr[N];
bool book[N];
map<int, int> mp;

int main() {

	cin >> n >> m;
    while(m--){
    	int x, y;
        cin >> x >> y;
        tr[y] = x;
        mp[x]++;
        book[x] = true;
        book[y] = true;
    }
    
    for(int i = 1;  i < N; i++)
        if(tr[i] == 0 && book[i]){
            cout << i << endl;
            break;
        }
    
    int cnt = -1, p = -1;
    for(auto x: mp){
        if(x.second >= cnt){
            cnt = x.second;
            p = x.first;
        }
    }
    
    cout << p << endl;
    
    for(int i = 1; i < N; i++)
        if(tr[i] == p)
            cout << i << " ";
    
	return 0;
}

