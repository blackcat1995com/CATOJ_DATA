#include<cstdio>
int divide(int M, int N)
{
	if(M == 0 || N == 1)
		return 1;
	if(N > M)
		return divide(M, M); 
    else
	    return divide(M, N - 1) + divide(M - N, N);
}

int main( )
{
 
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; ++ i)
	{
		int M, N;
		scanf("%d %d", &M, &N);
		printf("%d\n", divide(M, N));
	}
	return 0;
}
