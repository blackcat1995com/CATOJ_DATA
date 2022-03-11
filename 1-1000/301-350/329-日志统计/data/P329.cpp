#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

typedef pair<int, int> PII;

#define x first
#define y second

const int N = 100010;

int n, d, k;
PII logs[N];
bool st[N];//用来标记id号，因为id <= 1e5，所以可以利用遍历来输出。
int cnt[N];//用来记录一个id号获得的赞数，表示形式为cnt[id]++;

int main(){
	freopen("8.in", "r", stdin);
	freopen("8.out", "w", stdout);
    scanf("%d%d%d", &n, &d, &k);

    for (int i = 0; i < n; i ++ ) scanf("%d%d", &logs[i].x, &logs[i].y);
    //排序时默认以first为准排序
    sort(logs, logs + n);

    //双指针算法， i走在前面，j走在后面
    for (int i = 0, j = 0; i < n; i ++ ){
        int t = logs[i].y;//t表示为i时刻的id号
        cnt[t] ++;//在j时刻，id号为t的大佬日记获得了一个赞，给t大佬加一分

        while (logs[i].x - logs[j].x >= d){//两个指针跨越的时间超过了d，早期的赞过期了
            cnt[logs[j].y] --;//就是这位大佬，获赞的时间太久远了，赞作废了，哭去吧
            j ++;//在logs[j].x时刻的太久远了，往前挪挪。
            //这个循环，直到最后一个赞不过期为止。
        }
        //记录热帖的id号，好知道谁才是大佬
        if (cnt[t] >= k) st[t] = true;
    }

    //遍历一遍id号，展现大佬
    for (int i = 0; i <= 100000; i ++ ) if (st[i]) cout << i << endl;

    return 0;
}


