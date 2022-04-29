#include <iostream>
#include <cstdio>
using namespace std;

const int N = 110;

int n, m;
int p[N];
int cnt[N], ans1 = 0, ans2 = 0;

int find(int x){
	if(p[x] != x) p[x] = find(p[x]);
  	return p[x];
}

int main() {
  
  	cin >> n >> m;
  	for(int i = 1; i <= n; i++) p[i] = i;
  	
  	for(int i = 1; i <= m; i++){
    	int x, y;
      	cin >> x >> y;
      	int px = find(x), py = find(y);
      	if(px != py) p[px] = py;
    }
  
  	for(int i = 1; i <= n; i++)
      	if(p[i] == i) ans1++;
  
  	for(int i = 1; i <= n; i++)
      	cnt[find(i)]++;
  
  	for(int i = 1; i <= n; i++)
      	ans2 = max(ans2, cnt[i]);
  
  	cout << ans1 << " " << ans2 << endl;

	return 0;
}

