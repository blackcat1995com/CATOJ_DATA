#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N],c[N];//a是原始数组 c是倒序完的数组 
string b[N];  //b是初始字符串状态 
int main(){
	freopen("4.in", "r", stdin);
	freopen("4_1.out", "w", stdout);
	int x,y,n;
	scanf("%d%d",&x,&y);
	for (int i=x; i<=y; i++){
		a[i]=i;
		b[i]=to_string(i);
	}
	for (int i=x; i<=y; i++){
		reverse(b[i].begin(),b[i].end());//把b[i]倒序 
	}
	for (int i=x; i<=y; i++){
		c[i]=stoi(b[i]);
	} 
	for (int i=x; i<=y; i++){
		for (int j=i+1; j<=y; j++){
			if (c[j]<=c[i]){
				swap(c[i],c[j]);
				swap(b[i],b[j]);
			}
		}
	}
	for (int i=x; i<=y; i++){
		reverse(b[i].begin(),b[i].end()); 
	}
	for (int i=x; i<=y; i++){
		cout<<b[i]<<endl;
	}
	return 0;
}
