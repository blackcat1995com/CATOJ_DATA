#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>

#define x first
#define y second

using namespace std;
typedef pair<int, int> PII;

const int N = 200010;

int n,m;
int s[N];//ÿ̨���������
priority_queue<PII,vector<PII>,greater<PII> >q[N];//ÿ̨���������
//PII <����ʱ��,����>
//!ҪС����
int main()
{
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; ++ i)scanf("%d",&s[i]);//!�±��1��ʼ
    while (m -- ){
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        while(q[b].size()&&q[b].top().x<=a){//����β�Ľ���ʱ��С�ڵ�ǰ����ʱ��
            s[b] += q[b].top().y;//!�ָ����� +
            q[b].pop();//����������

        }
        if(s[b]<d)puts("-1");//��ǰ�����޷�����
        else{
            q[b].push({a+c,d});//��������
            s[b] -= d;//��������
            printf("%d\n",s[b]);//�������

        }
    }
    return 0;

}


