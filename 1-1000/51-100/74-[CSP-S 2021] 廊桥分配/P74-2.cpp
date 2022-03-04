#include <iostream>
#include <cstdio>
#include <set>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

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

int ans = 0;

// q �洢����/���ʺ��� �ִ�/�뿪 ʱ��Ķ�Ԫ��
// nΪ���������Ŀ
// ����ֵ ��������ĿΪnʱ������ͣ���ɻ������Ŀ
int calc(vector<Node>& q, int n){
	
	priority_queue<int, vector<int>, greater<int> > heap;
	
	if(n == 0) return 0;
	int res = 0;
	for(auto x : q){
		int t1 = x.t1, t2 = x.t2;
		// cout << t1 << " " << t2 << endl;
		
		if(heap.empty()){
			heap.push(t2);
			res++;
		}
		else if(t1 >= heap.top()){
			heap.pop();
			heap.push({t2});
			res++;
		}
		else if(heap.size() < n){
			// ��Ҫ�����µ�����
			heap.push(t2);
			res++;
		}
	}

	return res;
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
	
	for(int i = 0; i <= n; i++)
	    ans = max(ans, calc(q1, i) + calc(q2, n - i));

	cout << ans << endl;

	return 0;
}

