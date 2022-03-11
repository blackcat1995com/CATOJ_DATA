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
bool st[N];//�������id�ţ���Ϊid <= 1e5�����Կ������ñ����������
int cnt[N];//������¼һ��id�Ż�õ���������ʾ��ʽΪcnt[id]++;

int main(){
	freopen("8.in", "r", stdin);
	freopen("8.out", "w", stdout);
    scanf("%d%d%d", &n, &d, &k);

    for (int i = 0; i < n; i ++ ) scanf("%d%d", &logs[i].x, &logs[i].y);
    //����ʱĬ����firstΪ׼����
    sort(logs, logs + n);

    //˫ָ���㷨�� i����ǰ�棬j���ں���
    for (int i = 0, j = 0; i < n; i ++ ){
        int t = logs[i].y;//t��ʾΪiʱ�̵�id��
        cnt[t] ++;//��jʱ�̣�id��Ϊt�Ĵ����ռǻ����һ���ޣ���t���м�һ��

        while (logs[i].x - logs[j].x >= d){//����ָ���Խ��ʱ�䳬����d�����ڵ��޹�����
            cnt[logs[j].y] --;//������λ���У����޵�ʱ��̫��Զ�ˣ��������ˣ���ȥ��
            j ++;//��logs[j].xʱ�̵�̫��Զ�ˣ���ǰŲŲ��
            //���ѭ����ֱ�����һ���޲�����Ϊֹ��
        }
        //��¼������id�ţ���֪��˭���Ǵ���
        if (cnt[t] >= k) st[t] = true;
    }

    //����һ��id�ţ�չ�ִ���
    for (int i = 0; i <= 100000; i ++ ) if (st[i]) cout << i << endl;

    return 0;
}


