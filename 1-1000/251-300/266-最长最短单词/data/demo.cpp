#include <cstdio>
#include <cstring>

char s[20010];
int main(){
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	int cnt = 0, maxlen = 0, minlen = 101, imax, imin;
	gets(s);
	s[strlen(s)] = ' ';
	for (int i = 0; i <= strlen(s); i++){
		if ((s[i] != ' ') && s[i] != ','){
			cnt++;
		}
		else if(cnt > 0){
			if (cnt > maxlen){
				maxlen = cnt;
				imax = i - cnt;
			}
			if (cnt < minlen){
				minlen = cnt;
				imin = i - cnt;
			}
			cnt = 0;
		}
	}

	for (int i = imax; i < imax + maxlen; i++)
		printf("%c", s[i]);
	printf("\n");
	for (int i = imin; i < imin + minlen; i++)
		printf("%c", s[i]);
	
	return 0;
}
