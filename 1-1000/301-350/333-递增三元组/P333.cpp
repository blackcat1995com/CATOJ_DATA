#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

typedef long long LL;
const int N = 1e5 + 10;

int n;
int a[N], b[N], c[N];
int sa[N], sc[N];
int cnt[N], s[N];

int main() {
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) scanf("%d", &a[i]), a[i]++;
    for(int i = 0; i < n; i++) scanf("%d", &b[i]), b[i]++;
    for(int i = 0; i < n; i++) scanf("%d", &c[i]), c[i]++;
    
    // Çósa[]
    for(int i = 0; i < n; i++) cnt[a[i]]++;
    for(int i = 1; i < N; i++) s[i] = s[i - 1] + cnt[i];
    for(int i = 0; i < n; i++) sa[i] = s[b[i] - 1];
    
    // Çósc[]
    memset(cnt, 0, sizeof cnt);
    memset(s, 0, sizeof s);
    for(int i = 0; i < n; i++) cnt[c[i]]++;
    for(int i = 1; i < N; i++) s[i] = s[i - 1] + cnt[i];
    for(int i = 0; i < n; i++) sc[i] = s[N - 1] - s[b[i]];
    
    LL ans = 0;
    for(int i = 0; i < n; i++) ans += (LL)sa[i] * sc[i];
    
    cout << ans << endl;
	
	return 0;
}


