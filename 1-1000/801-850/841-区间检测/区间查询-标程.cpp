#include <iostream>
#include <cstring>
#define M 1000005
using namespace std;
int n, m, A[M], pre[M], C[65536],B[M],D[M],P=65535;
void Rd(int &res) {
	char c;res=0;
	while(c = getchar(),c < 48);
	do res = (res<<3) + (res << 1) + (c ^ 48);
	while(c=getchar(),c >= 48);
}
void Sort() {
	for(int i = 1; i <= n; ++i) C[A[i]&P]++;
	for(int i = 1; i <= P; ++i) C[i] += C[i-1];
	for(int i = n; i >= 1; --i) B[C[A[i]&P]--] = i;
	memset(C, 0, sizeof(C));
	for(int i = 1; i <= n; ++i) C[(A[B[i]]>>16)&P]++;
	for(int i = 1; i <= P; ++i) C[i] += C[i-1];
	for(int i = n; i >= 1; --i) D[C[(A[B[i]]>>16)&P]--] = B[i];
	for(int i = 1; i <= n; i++) B[i] = D[i]; 
}
int main()
{
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; ++i) Rd(A[i]);
	Sort();
	for(int i = 2; i <= n; ++i) {
		if(A[B[i]] == A[B[i-1]]) {
			pre[B[i]] = B[i-1];
		}
	}
	for(int i = 2; i <= n; ++i) {
		if(pre[i] < pre[i-1]) pre[i] = pre[i-1];
	}
	int L, R;
	while(m--) {
		Rd(L);Rd(R);
		putchar((pre[R]<L)^48);
		putchar('\n');
	}
	return 0;
}
