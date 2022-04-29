#include<iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int B_MAX = 42;
int n,k; //同题意
char str[42]; //输入的数字串

struct Bignum { //高精结构体
	int size;
	int a[B_MAX];
	Bignum() {
		size = 1;
		memset(a, 0, sizeof(a));
	}
};

Bignum ans; //答案

void input(){ //输入
    cin>>n>>k;
    cin>>str;
}

void print(Bignum & a) { //高精输出
	for (int i = a.size - 1; i >= 0; i--)
		putchar(a.a[i] + '0');
}

bool operator < (Bignum a, Bignum b) { //高精小于比较,max()函数会用到
	if (a.size < b.size)	return true;
	if (a.size > b.size)	return false;
	for (int i = a.size - 1; i >= 0; i--) {
		if (a.a[i] < b.a[i])	return true;
		if (a.a[i] > b.a[i])	return false;
	}
	return false;
}

Bignum operator * (Bignum a, Bignum b) { //高精乘法
	Bignum c;
	c.size = a.size + b.size - 1;
	for (int i = 0; i < a.size; i++)
		for (int j = 0; j < b.size; j++) {
			c.a[i + j] += a.a[i] * b.a[j];
			c.a[i + j + 1] += c.a[i + j] / 10;
			c.a[i + j] %= 10;
		}
	for ( ; c.a[c.size]; c.size++) {
		c.a[c.size + 1] = c.a[c.size] / 10;
		c.a[c.size] %= 10;
	}
	return c;
}

Bignum getnum(int l,int r){ //取数部分，讲解见上文
	Bignum num;
	num.size=r-l+1;
	for(int i=0;i<num.size;i++) num.a[i]=str[r-i]-'0';
	return num;
}

void s(int st,Bignum temp){ //搜索部分，讲解见上文
	/*cout<<"temp:";
	print(temp);   就不要在意这个中间输出了233
	cout<<endl;*/ 
	if(k==0){
		Bignum last=getnum(st,n-1);
		temp=last*temp;
		ans=max(ans,temp);
		return;
	}
	else for(int i=st;i<n-1;i++){
            k--;
            s(i+1,temp*getnum(st,i));
            k++;
        }
}

int main(){
	freopen("9.in", "r", stdin);
	freopen("9.out", "w", stdout);
    input();
    Bignum awm; //随便定义的，不要多想
    awm.size=1;
    awm.a[0]=1;
    s(0,awm);
    print(ans);
    return 0;
}

