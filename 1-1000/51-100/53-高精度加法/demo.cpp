#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int a[1001], b[1001], len;
void init();
void add();
void print();
int main(){
	
	init();
	add();
	print();
	
	return 0;
}

void init(){
	char ac[1001], bc[1001];
	cin >> ac >> bc;
	a[0] = strlen(ac);
	b[0] = strlen(bc);

	for (int i=1; i<=a[0]; i++)
		a[i] = ac[a[0]-i] - '0';

	for (int i=1; i<=b[0]; i++)
		b[i] = bc[b[0]-i] - '0';
	
	// Ç°µ¼0  0012 + 00345 1200 + 54300 
	// a = 4120000000000000000000000000000000..... 
	while (a[a[0]]==0 && a[0]>1)	a[0]--;
	while (b[b[0]]==0 && b[0]>1)	b[0]--;
}

void add(){
	int k = 0, temp;
	len = max(a[0]+1, b[0]+1);
	for (int i=1; i<=len; i++){
		temp = a[i] + b[i] + k;
		a[i] = temp % 10;
		k = temp / 10;
	}
}

void print(){
	while (a[len]==0 && len>1) 	len--;
	for (int i=len; i>=1; i--)	cout << a[i];
}
 
