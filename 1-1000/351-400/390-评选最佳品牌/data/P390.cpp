#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int M = 15, N = 1010, INF = 0x3f3f3f3f;

int m, n;
int a[N][M];	// ����ͶƱ��� a[i][j] ��ʾ �� i ����ί���� j ��ͶƱ����Ʒ
int cnt[M];		// cnt[i] �� i ����ƷͶƱ���ۼ�
bool book[M];	// book[i] = true �� i ����Ʒ�Ѿ�����̭

bool is_success = true;
int last_piaoshu;
int last_pinpai;

// ͳ��δ��ɾ����Ʒ��ͶƱ���ֵ����Сֵ
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
				// ��̭��С��Ʊ��Ʒ��
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
	
	cin >> m >> n;	// m����Ʒ��n����ί
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


