#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 510;

struct Node{
	int t;	// 截止时间 
	int r;	// 收益 
	bool operator < (const Node& x) const{
		return r > x.r;
	}
}node[N];

int n;
int T[N];

int res = 0;

int main() {
	
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> node[i].t;
	for(int i = 1; i <= n; i++) cin >> node[i].r;
	
	sort(node + 1, node + n + 1);
	
//	for(int i = 1; i <= n; i++)
//		cout << node[i].t << " " << node[i].r << endl;
		
	for(int i = 1; i <= n; i++){
		for(int j = node[i].t; j >= 1; j--){
			if(T[j] == 0){
				T[j] = node[i].r;
				res += node[i].r;
				break;
			}
		}
	}
	
	cout << res << endl;
	
	return 0;
}

/*
7
4 2 4 3 1 4 6
70 60 50 40 30 20 10
*/
