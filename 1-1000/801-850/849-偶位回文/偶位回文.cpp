/*
	��Ŀ����
	 
	��������һ������˼�����֣�����߶����ұ���Ľ��һģһ����
	С�������һ�Ų�֪�Ǳ�˭�����Ĳݸ�ֽ�Ϸ�����һ��ͻ�������ص�����,
	1 11
	2 22
	3 33
	4 44
	5 55
	6 66
	7 77
	8 88
	9 99
	10 1001
	11 1111
	12 1221
	13 1331
	14 1441
	15 1551
	16 1661
	17 1771
	18 1881
	19 1991
	20 2002
	... 
	��������ϸ�۲���������˹���
	...
	�����������Ҫȥ��С�Ƿ��������Ϊ�ܵ�̫��ײ���˰��Ϳ��ֵ�robin ��ʿ������������ֽ���� 
	����ֻʣ�²���������,�����Լ�ҲҲ��ײ��ͷ�Σ������˹��ɡ�
	
	"С�ǣ������ô��ѽ" 
	"���ż��������о��о�...ѽ����,�㷢�ֵ�һ��������żλ������,��ָλ��Ϊż����,�����ǻ����������֡�
	
	"��ô���ܰ�ʣ�µ����ֲ�ȫ�"
	
	"��Ȼû������" 
	
	��Ŀ����
	
	����һ������ n,����� n ��żλ������
	
	
	�������� 
	1
	
	�������
	
	11 
	
	�������� 
	20
	
	�������
	
	2002 
	
	
	int num;
	cin>>num;
	
	cout<<num;
	while(num!=0)
	{
		cout<<num%10; num/=10;
	}
		
*/
#include<bits/stdc++.h> 
using namespace std;
long long n,sum,num,p; //num:���湹��Ļ�������p:��������λ��, sum:��; 
int ws(long long nu) 	//����λ�� 
{
	int i=0;
	while(nu!=0)
	{
		nu/=10;
		i++;
	}
	return i;
}
long long nx(long long nu) 
{
	long long ans=0;
	while(nu!=0)
	{
		ans=ans*10+nu%10;
		nu/=10;
	}
	return ans;
}
int main()
{
	cin>>n;
	num = n*pow(10,ws(n))+nx(n); //n*pow(10,��λ��)+ (����n);
	cout<<num;
	return 0;
}

/*
long long firstPower(long long a,long long b,long long p) //a^b%p
{
	long long result =1;
	while(b)
	{
		if(b&1) result=result*a%p;
		b >>= 1;
		a=a*a%p;
	}
	return result;
}

void qsort(int l, int r )
{
 int i = l , j = r , mid = a[ (l+r) >> 1 ];
 while (i<= j)
 {
  while (a[i] < mid) i++ ;
  while (a[j] > mid) j-- ;
  if (i<=j) swap(a[i++], a[j--]) ;
 }
 if (l<j) qsort(l,j) ;
 if (i<r) qsort(i,r) ;
}

void insert_sort()
{
	for(int i=1;i<=n;i++)
		for(int j=i;j>=2;j--)
			if(a[j]<a[j-1]) swap(a[j],a[j-1]);
}

int dfs1( int k )
{
	for ( i = 1; i <= �������; i++ )
	if ( ��������)
	{
	      ������
	      if ( ����Ŀ�ĵ�)
	           ����⣻
	      else
	           dfs1(k+1);
	      �ָ�������ǰ��״̬������һ����
	}
}

int dfs2( int k )
{
��  if  (��Ŀ�ĵ�)
          �����;
��  else
������for (i=1;i<=�������;i++)
����������if  (��������)
��������   {
����������     ������;
������            dfs2(k+1);
������������  �ָ���������֮ǰ��״̬{����һ��}
����������}
}

void bfs(int x,int y)
{

    ���� ��ͷ,��β��

	node h,temp;
	temp.x = x;temp.y = y;
	q.push(temp);

	while(!q.empty())
	{
		h = q.front(); q.pop();
		for(int i=0;i<4;i++)
		{
			int tx = h.x+nex[i][0];
			int ty = h.y+nex[i][1];
			if(tx<1||tx>n||ty<1||ty>m||a[tx][ty]==0) continue;
			else
			{
				a[tx][ty]=0;
				temp.x = tx;
				temp.y = ty;
				q.push(temp);
			}
		}
	}
}

string �ࣺ

	��ʲô? �ַ������ͣ���string ����ı����ɿ�����һ���ַ�����;

	��ôʹ��?

		�� ���� �� ���
			cin(!cin ���нض������Σ��) cout
			getline(cin,�ַ�����);     //��ȡһ�����ݸ�����Ӧ���ַ���;

		��*�󳤶�
			size();
			length();	//���� str.size();

		�� ����
			str1 = str2;

		�� ����
			str1 += str2; // "hello" += " world" ==> "hello world";

		��*�Ƚ� >��==��<

			if(str1.size() != str2.size())
			{
				if(str1.size()>str2.size()) cout<<str1<<">"<<str2;
				else cout<<str1<<"<"<<str2;
			}
			else
			{
				if(str1>str2) cout<<str1<<">"<<str2;
				else if(str1==str2) cout<<str1<<"=="<<str2;
				else if(str1<str2) cout<<str1<<"<"<<str2;
			}

		��*����
			insert(�����λ��,Ҫ������ַ���);
			����:
					string str1="hello";
					string str2="world";
					str1.insert(2,str2);
					cout<<str1;//heworldllo
		��*ɾ��
			erase(���Ǹ�λ�ÿ�ʼɾ��,ɾ�����ٸ�);
			string str1="hello!world";
			str1.erase(6,5);
			cout<<str1;//hello��

			��ֻ�е�һ�������Ļ���Ĭ�Ͻ��Ӹ�λ�����������ȫ��ɾ��!

		��*����
			���1�� int p  =  str.find(Ҫ���ҵ��ַ���);
					��� str �� ���ڴ����ҵ��ַ��� �� ���ظ������ַ�����str�е�һ�γ��ֵ�λ�á�
					��� str �� �����ڴ����ҵ��ַ��� �᷵�ظ����� һ���ؼ��� string::npos

						p��ʾ Ҫ���ҵ��ַ����� str �е�һ�γ��ֵ�λ��;

						str="hhhhhhhhhhhhhhhhhh";

						str1="h";

			���2�� int p = str.find(Ҫ���ҵ��ַ���,���Ǹ�λ�ÿ�ʼ����);
����С���ѣ�
priority_queue<string,vector<string>,greater<string> >small_heap;
����
	small_heap.push();
�����С
	small_heap.top();
ɾ����С
	small_heap.pop();
	
reverse(str.begin(),str.end());
int nex[8][2]={{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};	//�ϣ����ϣ���,���£��£����£��� ���ϣ�
int nex[4][2]={{-1,0},{0,1},{1,0},{0,-1}};	//�ϣ���,�£��� ;           //�ϣ��£�����
int nex[8][2]= {{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1}};	//����߷�
struct node
{
	int x,y;
	char symbol;
}a[1010][1010];

queue <node> q;		//�������

��vectorvector��ô���أ������¼��ֳ��õĲ�����

��1��vector<int> a ����һ��int���͵�vectorһά���顣

��2��vector<int> a(10) ����һ��int���͵ĳ���Ϊʮ��vectorһά���顣

��3��vector<int> a(10)(1) ����һ��int���͵ĳ���Ϊʮ��ֵΪһ��vectorһά���顣

��4��vector<vector<int> > a ����һ��int���͵�vector��ά���飬Ҫע����ǣ��������vecotr<int>����Ҫ��һ���ո񣬷���ᱻ��Ϊ����λ��������������

��5��a.begin() ��������a����Ԫ�ص�ָ�루����������

��6��a.end() ��������a��ĩβԪ�ص���һ��Ԫ�ص�ָ�루����������

��7��a.size() �����е�Ԫ�ظ���

��8��a.empty() �ж������Ƿ�Ϊ��

��9��a.clear() ��������е�Ԫ��

��10��a.insert(a.begin(),1000) ��1000���뵽����a����ʼλ��ǰ

��11��a.insert(a.begin(),3,1000); ��1000�ֱ���뵽����Ԫ��λ�õ�0-2��(��3��Ԫ��)

��12��a.erase(a.begin()); ����ʼλ�õ�Ԫ��ɾ��

��13��a.erase(a.begin(),a.begin()+3) ; ��(a.begin(),a.begin()+3)֮���Ԫ��ɾ��

��14��a.push_back(1) ��1�ŵ�����β��

��15��a[1] �����е��±�Ϊ1��ֵ

vector��������ȣ�vector���Ըı䳤�ȣ���յ�ʱ�临�Ӷ�ΪO(1)��
bitset<100000000>vis; vis[i]==1 ��ʾi������ vis[i]==0 ��ʾi������

bool prim1(int n)
{
	if(n==1) return false;
	for(int i=2;i<n;i++)
	{
		if(n%i==0) return false;
	}
	return true;
}

bool prim2(int n)
{
	if(n==1) return false;
	for(int i=2;i*i<=n;i++) //i<= sqrt(n)
	{
		if(n%i==0) return false;
	}
	return true;
}

����ɸ�����ĳ������������������˵õ��ģ���ô��һ������������ɸ��1~n�����еķ�����,��������
void prim3(int n)
{
	vis[1]=1;  //Ԥ����1������
	for(int i=2;i<=n;i++)
	{
		if(vis[i]) continue; 	//��������������
		cout<<i<<endl;			//i������
		for(int j=2;j<=n/i;j++) vis[i*j]=1;
	}
}

����ɸ(ŷ��ɸ)����֤��ÿһ�����ֶ��Ǳ�����С��������ɸ����    //��취��ÿ�����ֵ���С������
int prime[N];
int cnt = 0;
void oula(int n)
{
	vis[1]=1;  		//Ԥ����1������
	for(int i=2;i<=n;i++)
	{
		if(vis[i]==0) { vis[i]=i;prime[++cnt]=i;}				//i������
		for(int j=1;j<=cnt;j++)
		{
			if(prime[j]>vis[i] || prime[j]>n/i) break; 			//i�б�prime[j]��С������,���߳���n�ķ�Χֹͣѭ��
			vis[i*prime[j]] = prime[j];							//prime[j]�Ǻ���i*prime[j]����С������
		}
	}
}

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<cmath>
#include<ctime>
#include<algorithm>
#include<utility>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<bitset>

���ֲ���ģ��0, a[mid]==x;
���ó���,Ҫ���ҵ������ڵ�ǰ������Ҫô����Ҫô������,���ڷ��������±�,�����ڷ���-1;

int find0(int l,int r,int x)
{
	while(l<=r)					//ע�⣬l<=r ��Ϊ�˲�©���м������
	{
		int mid = l+r >> 1;
		if(a[mid]==x) return mid;
		else if(a[mid]>x) r = mid-1;
		else if(a[mid]<x) l = mid+1;
	}
	return -1;
}

���ֲ���ģ��1,a[mid]>=x;
���ó���,Ҫ���ҵ������ڵ�ǰ���������,���ҿ������ظ���������,Ҫ�����ǲ��ҳ������ֵ�һ�γ��ֵ�λ��
�Ǿ���Ҫ���Ǿ�������������ݣ�Ҳ���� if a[mid]>=x r=mid else l = mid+1;

int find1(int l,int r,int x)
{
	while(l<r)
	{
		int mid = l+r >>1;
		if(a[mid]>=x) r= mid;
		else l = mid+1;
	}
	if(a[l]==x) return l;
	else return -1;
}

���ֲ���ģ��2,a[mid]<=x;
���ó���,Ҫ���ҵ������ڵ�ǰ��������ڣ����ҿ������ظ���������,Ҫ�����ǲ��ҳ����������һ�γ��ֵ�λ��
�Ǿ�Ҫ�����Ǿ������ұ�������,Ҳ���� if a[mid]<=x l=mid else r= mid-1;

int find2(int l,int r,int x)
{
	while(l<r)
	{
		int mid = l+r+1 >> 1;	//����1�Ļ�����©�����ұߵ�����
		if(a[mid]<=x) l= mid;
		else r = mid -1;
	}
	if(a[r]==x) return r;
	else return -1;
}

���ֲ���ģ��3,����������

	while(r-l > 1e-5) 			//��Ҫһ������
	{
		double mid = (l+r)/2;
		if(check(mid)) l = mid;
		else r = mid;
	}

STL �ṩ�Ķ��ֲ���

lower_bound(first,last, val);
���ֲ���һ����������������� first~last ��Χ��(����ҿ�����)��һ��>= val��ֵ��λ�á�
��������,�򷵻ظ�λ�õ�ָ��,�������� �򷵻ظ�λ�õĵ�������
ʱ�临�Ӷ�Ϊ O(log2(last-first)) ;

upper_bound(first,last, val);
���ֲ���һ�����������������first~last ��Χ��(����ҿ�����)��һ�� > val��ֵ��λ�á�
��������,�򷵻ظ�λ�õ�ָ��,�������� �򷵻ظ�λ�õĵ�������
ʱ�临�Ӷ�Ϊ O(log2(last-first)) ;

����ʹ�ã�
int * lps =  lower_bound(a,a+n, val); cout<<*lps; //������upper_bound()ͬ
cout<<lower_bound(a,a+n, val)- a;				  //������upper_bound()ͬ

binary_ search(��ʼλ�ã� ����λ�ã�Ҫ�ҵ�Ԫ��)��
���ֲ���ĳ��Ԫ�أ�ʱ�临�Ӷ�ΪO(logN)�������һ����Χ���ҵ�ֵ�����ء�true�������򷵻�"false����
*/


