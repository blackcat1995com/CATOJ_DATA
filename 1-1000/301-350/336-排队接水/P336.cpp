#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef pair<int, int> PII;

const int N = 1010;

int n;
PII q[N];
double sum = 0;

int main() {

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d", &q[i].first);
        q[i].second = i;
    }

    sort(q + 1, q + n + 1);

    double t = 0;

    for(int i = 2; i <= n; i++){
        t += q[i-1].first;
        sum += t;
    }

    for(int i = 1; i <= n; i++) printf("%d ", q[i].second);

    printf("\n%.2lf\n", sum / n);
	
	return 0;
}
