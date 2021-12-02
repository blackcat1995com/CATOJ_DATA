#include <iostream>
#include <cstdio>
using namespace std;


const int N = 1e6 + 10;
int n, k;
int a[N];
int cnt = 0;

int main() {

	scanf("%d%d", &n, &k);

	for(int i = 1; i <= n - 1; i++){
		scanf("%d", &a[i]);
		cnt += a[i];
	}
	
//	cout << cnt << endl;

	int maxv = 0;
	for(int i = n - 1; i >= k; i--){
//		cout << endl;
		int t = 0;
		for(int j = i - k + 1; j <= i; j++)
			t += a[j];
//		cout << t << endl;
//		cout << i << " " << i - k << " " << a[i] << endl;
//      	int t = 0;
//      	for(int j = i - k + 1; j <= i; j++)
//          	t += a[i];
        
    	maxv = max(maxv, t);
    }
//		
//	
	printf("%d\n", cnt - maxv);
	
	return 0;
}

