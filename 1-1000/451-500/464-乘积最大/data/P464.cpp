#include<iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int B_MAX = 42;
int n,k; //ͬ����
char str[42]; //��������ִ�

struct Bignum { //�߾��ṹ��
	int size;
	int a[B_MAX];
	Bignum() {
		size = 1;
		memset(a, 0, sizeof(a));
	}
};

Bignum ans; //��

void input(){ //����
    cin>>n>>k;
    cin>>str;
}

void print(Bignum & a) { //�߾����
	for (int i = a.size - 1; i >= 0; i--)
		putchar(a.a[i] + '0');
}

bool operator < (Bignum a, Bignum b) { //�߾�С�ڱȽ�,max()�������õ�
	if (a.size < b.size)	return true;
	if (a.size > b.size)	return false;
	for (int i = a.size - 1; i >= 0; i--) {
		if (a.a[i] < b.a[i])	return true;
		if (a.a[i] > b.a[i])	return false;
	}
	return false;
}

Bignum operator * (Bignum a, Bignum b) { //�߾��˷�
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

Bignum getnum(int l,int r){ //ȡ�����֣����������
	Bignum num;
	num.size=r-l+1;
	for(int i=0;i<num.size;i++) num.a[i]=str[r-i]-'0';
	return num;
}

void s(int st,Bignum temp){ //�������֣����������
	/*cout<<"temp:";
	print(temp);   �Ͳ�Ҫ��������м������233
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
    Bignum awm; //��㶨��ģ���Ҫ����
    awm.size=1;
    awm.a[0]=1;
    s(0,awm);
    print(ans);
    return 0;
}

