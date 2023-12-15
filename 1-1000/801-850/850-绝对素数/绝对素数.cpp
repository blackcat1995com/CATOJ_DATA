/*
绝对素数，
"素数也称做质数，是指除了1和本身外再也没有其它因数的数字，
所以我们可以根据素数的定义快速判断某个数字n是否是素数 "，龙博士说道。

"哎呀别讲了,别讲了,这太简单了",小爱说道。
"就是用循环列举出2~n-1 的所有数字，然后用n去试除,若有能够整除的说明有其它因数的存在,就不是素数，
全部试除完毕后确实没有能被n整除的就是素数",小星说到。

"哼，你们都这么厉害，那我来考一考你们，若n是素数，那么将n反着读也是素数的数字被称作绝对素数，现在你们来写
一下 输出第n小的绝对素数这个程序吧",龙博士说。

样例输入
1
样例输出
2

样例输入 
7 
样例输出 
17
样例输入 
8636 
样例输出 
781427

数据范围 
① 1<=n <= 10000;
②在 2~ 1000000 内找即可 

*/
#include<bits/stdc++.h>
#define INF 999999999
#define N 100010
using namespace std;
int n,cnt;

bool is_prime(int num)
{
	for(int i=2;i*i<=num;i++)
	{
		if(num%i==0) return false;
	}
	return true;
}

int nx_num(int num)
{
	int new_num=0;
	while(num!=0)
	{
		new_num = new_num*10 + num%10;
		num/=10;
	}
	return new_num;
}

int main()
{   cin>>n;
	for(int i=2;i<=1000000;i++)
	{
		if(is_prime(i) && is_prime(nx_num(i)))
		{
			++cnt;
			if(cnt == n)
			{
			 	cout<<i<<endl;
			 	break;
			}	
		} 
	}
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
	for ( i = 1; i <= 算符种数; i++ )
	if ( 满足条件)
	{
	      保存结果
	      if ( 到达目的地)
	           输出解；
	      else
	           dfs1(k+1);
	      恢复保存结果前的状态（回溯一步）
	}
}

int dfs2( int k )
{
　  if  (到目的地)
          输出解;
　  else
　　　for (i=1;i<=算符种数;i++)
　　　　　if  (满足条件)
　　　　   {
　　　　　     保存结果;
　　　            dfs2(k+1);
　　　　　　  恢复：保存结果之前的状态{回溯一步}
　　　　　}
}

void bfs(int x,int y)
{

    定义 队头,队尾。

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

string 类：

	是什么? 字符串类型，用string 定义的变量可看做是一个字符数组;

	怎么使用?

		① 输入 及 输出
			cin(!cin 会有截断输入的危险) cout
			getline(cin,字符串名);     //获取一段内容给到相应的字符串;

		②*求长度
			size();
			length();	//例如 str.size();

		③ 拷贝
			str1 = str2;

		④ 连接
			str1 += str2; // "hello" += " world" ==> "hello world";

		⑤*比较 >、==、<

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

		⑥*插入
			insert(插入的位置,要插入的字符串);
			例如:
					string str1="hello";
					string str2="world";
					str1.insert(2,str2);
					cout<<str1;//heworldllo
		⑦*删除
			erase(从那个位置开始删除,删除多少个);
			string str1="hello!world";
			str1.erase(6,5);
			cout<<str1;//hello！

			若只有第一个参数的话会默认将从该位置往后的内容全部删掉!

		⑧*查找
			情况1： int p  =  str.find(要查找的字符串);
					如果 str 中 存在待查找的字符串 会 返回给我们字符串在str中第一次出现的位置。
					如果 str 中 不存在待查找的字符串 会返回给我们 一个关键字 string::npos

						p表示 要查找的字符串在 str 中第一次出现的位置;

						str="hhhhhhhhhhhhhhhhhh";

						str1="h";

			情况2： int p = str.find(要查找的字符串,从那个位置开始查找);
定义小根堆：
priority_queue<string,vector<string>,greater<string> >small_heap;
插入
	small_heap.push();
输出最小
	small_heap.top();
删除最小
	small_heap.pop();
	
reverse(str.begin(),str.end());
int nex[8][2]={{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};	//上，右上，右,右下，下，左下，左， 左上；
int nex[4][2]={{-1,0},{0,1},{1,0},{0,-1}};	//上，右,下，左 ;           //上，下，左，右
int nex[8][2]= {{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1}};	//马的走法
struct node
{
	int x,y;
	char symbol;
}a[1010][1010];

queue <node> q;		//定义队列

那vectorvector怎么用呢，有以下几种常用的操作：

（1）vector<int> a 定义一个int类型的vector一维数组。

（2）vector<int> a(10) 定义一个int类型的长度为十的vector一维数组。

（3）vector<int> a(10)(1) 定义一个int类型的长度为十初值为一的vector一维数组。

（4）vector<vector<int> > a 定义一个int类型的vector二维数组，要注意的是，在里面的vecotr<int>后面要加一个空格，否则会被认为是移位运算符而编译错误。

（5）a.begin() 返回数组a的首元素的指针（迭代器）。

（6）a.end() 返回数组a的末尾元素的下一个元素的指针（迭代器）。

（7）a.size() 数组中的元素个数

（8）a.empty() 判断数组是否为空

（9）a.clear() 清空数组中的元素

（10）a.insert(a.begin(),1000) 将1000插入到向量a的起始位置前

（11）a.insert(a.begin(),3,1000); 将1000分别插入到向量元素位置的0-2处(共3个元素)

（12）a.erase(a.begin()); 将起始位置的元素删除

（13）a.erase(a.begin(),a.begin()+3) ; 将(a.begin(),a.begin()+3)之间的元素删除

（14）a.push_back(1) 将1放到数组尾部

（15）a[1] 数组中的下标为1的值

vector和数组相比，vector可以改变长度，清空的时间复杂度为O(1)。
bitset<100000000>vis; vis[i]==1 表示i是素数 vis[i]==0 表示i非素数

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

埃氏筛：如果某个数字是由两个数相乘得到的，那么它一定不是素数，筛掉1~n中所有的非素数,留下素数
void prim3(int n)
{
	vis[1]=1;  //预处理1非素数
	for(int i=2;i<=n;i++)
	{
		if(vis[i]) continue; 	//不是质数，跳过
		cout<<i<<endl;			//i是质数
		for(int j=2;j<=n/i;j++) vis[i*j]=1;
	}
}

线性筛(欧拉筛)：保证让每一个数字都是被它最小的质因数筛掉的    //想办法找每个数字的最小质因数
int prime[N];
int cnt = 0;
void oula(int n)
{
	vis[1]=1;  		//预处理1非素数
	for(int i=2;i<=n;i++)
	{
		if(vis[i]==0) { vis[i]=i;prime[++cnt]=i;}				//i是质数
		for(int j=1;j<=cnt;j++)
		{
			if(prime[j]>vis[i] || prime[j]>n/i) break; 			//i有比prime[j]更小的因子,或者超出n的范围停止循环
			vis[i*prime[j]] = prime[j];							//prime[j]是合数i*prime[j]的最小质因子
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

二分查找模板0, a[mid]==x;
适用场景,要查找的数据在当前数列里要么存在要么不存在,存在返回数据下标,不存在返回-1;

int find0(int l,int r,int x)
{
	while(l<=r)					//注意，l<=r 是为了不漏掉中间的数据
	{
		int mid = l+r >> 1;
		if(a[mid]==x) return mid;
		else if(a[mid]>x) r = mid-1;
		else if(a[mid]<x) l = mid+1;
	}
	return -1;
}

二分查找模板1,a[mid]>=x;
适用场景,要查找的数据在当前数列里存在,而且可能有重复的数出现,要求我们查找出该数字第一次出现的位置
那就需要我们尽量往左边找数据，也就是 if a[mid]>=x r=mid else l = mid+1;

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

二分查找模板2,a[mid]<=x;
适用场景,要查找的数据在当前数列里存在，而且可能有重复的数出现,要求我们查找出该数字最后一次出现的位置
那就要求我们尽量往右边找数据,也就是 if a[mid]<=x l=mid else r= mid-1;

int find2(int l,int r,int x)
{
	while(l<r)
	{
		int mid = l+r+1 >> 1;	//不加1的话容易漏掉最右边的数据
		if(a[mid]<=x) l= mid;
		else r = mid -1;
	}
	if(a[r]==x) return r;
	else return -1;
}

二分查找模板3,浮点数二分

	while(r-l > 1e-5) 			//需要一个精度
	{
		double mid = (l+r)/2;
		if(check(mid)) l = mid;
		else r = mid;
	}

STL 提供的二分查找

lower_bound(first,last, val);
二分查找一个有序数组或容器中 first~last 范围内(左闭右开区间)第一个>= val的值的位置。
若是数组,则返回该位置的指针,若是容器 则返回该位置的迭代器。
时间复杂度为 O(log2(last-first)) ;

upper_bound(first,last, val);
二分查找一个有序数组或容器中first~last 范围内(左闭右开区间)第一个 > val的值的位置。
若是数组,则返回该位置的指针,若是容器 则返回该位置的迭代器。
时间复杂度为 O(log2(last-first)) ;

具体使用：
int * lps =  lower_bound(a,a+n, val); cout<<*lps; //方法①upper_bound()同
cout<<lower_bound(a,a+n, val)- a;				  //方法②upper_bound()同

binary_ search(开始位置， 结束位置，要找的元素)。
二分查找某个元素，时间复杂度为O(logN)。如果在一个范围内找到值，返回“true”，否则返回"false”。
*/


