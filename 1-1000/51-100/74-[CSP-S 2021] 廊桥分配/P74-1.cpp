#include <iostream>
#include <cstdio>
#include <set>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

typedef pair<int, int> PII;
const int N = 1e5 + 10;

struct Node{
	int t1, t2;
	bool operator< (const Node& x) const{
		return t1 < x.t1;
	}
};

int n, m1, m2;

// q1���ں�������, q2���ʺ�������
vector<Node> q1, q2;

int answer = 0;
int ans1[N], ans2[N];

// q �洢����/���ʺ��� �ִ�/�뿪 ʱ��Ķ�Ԫ��
// nΪ���������Ŀ
// ����ֵ ��������ĿΪnʱ������ͣ���ɻ������Ŀ
void work(vector<Node>& q, int m, int ans[]){
	
	// first t2  second ���ű��
	priority_queue<PII, vector<PII>, greater<PII> > usedQ;
	priority_queue<int, vector<int>, greater<int> > freeQ;

	// ��ʼ�������Ŷ�����
	for(int i = 1; i <= m; i++)
		freeQ.push(i);

	for(int i = 0; i < m; i++){
		while(!usedQ.empty() && q[i].t1 > usedQ.top().first){
			freeQ.push(usedQ.top().second);
			usedQ.pop();
		}
		if(!freeQ.empty()){
			int smallnum = freeQ.top();
			usedQ.push({q[i].t2, smallnum});
			freeQ.pop();
			ans[smallnum]++;
		}
	}

	for(int i = 1; i <= n; i++)
		ans[i] += ans[i - 1];
	// for(int i = 0; i <= n; i++)
	// 	cout << ans[i] << " ";
}

int main(){
	// n�������� m1���ں������� m2���ʺ�������
	cin >> n >> m1 >> m2;
	for(int i = 1; i <= m1; i++){
		int t1, t2;
		cin >> t1 >> t2;
		q1.push_back({t1, t2});
	}

	for(int i = 1; i <= m2; i++){
		int t1, t2;
		cin >> t1 >> t2;
		q2.push_back({t1, t2});
	}

	sort(q1.begin(), q1.end(), less<Node>());
	sort(q2.begin(), q2.end(), less<Node>());

	work(q1, m1, ans1);
	work(q2, m2, ans2);
	
	for(int i = 0; i <= n; i++)
		answer = max(answer, ans1[i] + ans2[n - i]);

	cout << answer << endl;

	return 0;
}


