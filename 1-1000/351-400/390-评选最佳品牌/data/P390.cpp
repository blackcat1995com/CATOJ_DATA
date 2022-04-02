#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int M = 15, N = 1010, INF = 0x3f3f3f3f;

int m, n;
int a[N][M];	// 所有投票情况 a[i][j] 表示 第 i 个评委，第 j 轮投票的商品
int cnt[M];		// cnt[i] 第 i 个商品投票数累计
bool book[M];	// book[i] = true 第 i 个商品已经被淘汰

bool is_success = true;
int last_piaoshu;
int last_pinpai;

// 统计未被删除商品的投票最大值和最小值
void calc_max_min(int& maxv, int& minv){
	for(int i = 1; i < M; i++)
		if(!book[i]){
			minv = min(minv, cnt[i]);
			maxv = max(maxv, cnt[i]);
		}
}

void work(){

	while(true){
		memset(cnt, 0, sizeof cnt);
		for(int i = 1; i <= n; i++){
			for(int j = 1; j < M; j++){
				int t = a[i][j];
				if(!t) break;
				if(book[t]) continue;
				cnt[t]++;
				break;
			}
		}

		int maxv = -INF, minv = INF;
		calc_max_min(maxv, minv);

		if(maxv > minv){
			for(int i = 1; i < M; i++){
				// 淘汰最小得票的品牌
				if(cnt[i] == minv && !book[i])
					book[i] = true;	
			}
			continue;
		}
		else{
			int sum = 0;
			for(int i = 1; i < M; i++)
				if(cnt[i] == minv){
					sum++;
					last_pinpai = i;
				}

			if(sum == 1) return;
			else{
				last_piaoshu = minv;
				is_success = false;
				return;
			}
		}
	}
	
}

int main() {
	
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	
	cin >> m >> n;	// m种商品，n个评委
	for(int i = 1; i <= n; i++){
		char str[M];
		cin >> str + 1;
		for(int j = 1; str[j]; j++)
			a[i][j] = str[j] - '0';
	}

	work();

	if(is_success) cout << last_pinpai << endl;
	else cout << -last_piaoshu << endl;

	return 0;
}


