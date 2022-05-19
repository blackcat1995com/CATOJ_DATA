#include <iostream>
#include <cstdio>
#include <set>
#include <cmath>
#include <vector>
using namespace std;

const int INF = 0x7fffffff;

struct Node{
	int key, a, b; // key = |a + b|  key = |d - c|
	bool operator< (const Node& x) const{
		return key < x.key;
	}
};

int a[1010];


int main() {

	int n;

	while(scanf("%d", &n), n){

		set<Node> st1;	// key = |a + b|
		set<Node> st2;  // key = |d - c|

		for(int i = 1; i <= n; i++) scanf("%d", &a[i]);

		for(int i = 1; i <= n; i++){
			for(int j = i + 1; j <= n; j++){
				// 预处理st1任意两数之和绝对值，st2任意两数之差绝对值
				// Node node1 = {}
				st1.insert({abs(a[i] + a[j]), i, j});
				st2.insert({abs(a[i] - a[j]), i, j});
			}
		}
		
		bool is_find = false;
		int maxv = -INF;
		for(auto it1 = st1.begin(); it1 != st1.end(); it1++){
			auto it2 = st2.find((*it1));
			if(it2 == st2.end()) continue;
				
			int v1 = a[(*it1).a], v2 = a[(*it1).b], v3 = a[(*it2).a], v4 = a[(*it2).b];
			vector<int> v;
			v.push_back(v1), v.push_back(v2), v.push_back(v3), v.push_back(v4);
			
			
			if(v1 != v3 && v1 != v4 && v2 != v3 && v2 != v4){
				is_find = true;
				if(v3 == v1 + v2 + v4) maxv = max(maxv, v3);
				if(v4 == v1 + v2 + v3) maxv = max(maxv, v4);
			}
		}

		if(is_find) printf("%d\n", maxv);
		else puts("No Solution");
	}
	return 0;
}

