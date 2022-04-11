#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1010;
char p[N] , s[N]; //p��ģ��,s��ģʽ
int ne[N];

int main()
{
	freopen("1.in", "r", stdin);
	freopen("1.out", "w", stdout);
    while(scanf("%s",s+1))
    {
        int res = 0;
        memset(ne, 0 , sizeof ne);
        if(s[1] =='#'  && s[2] == '\0') break; //�����ڴ�����ô�˳���ѭ��,ѧ���ˣ�

        scanf("%s", p+1);
        int n = strlen(p+1);
        //ne���
        for(int i = 2, j = 0 ; i <= n; i++)
        {
            while(j && p[i] != p[j+1]) j = ne[j];
            if(p[i] == p[j+1]) j++;
            ne[i] = j;
        }
        //kmp
        int m = strlen(s+1);
        for (int i = 1, j =0 ; i <= m; i ++ )
        {
            while(j && s[i] != p[j+1]) j = ne[j];
            if(s[i] == p[j+1]) j++;
            if(j == n)
            {
                res++;
                j = 0; //ע������ j�����0��ʼ,��Ϊǰ��Ĳ�����������
            }
        }
        cout << res <<endl;
    }
    return 0;
}


