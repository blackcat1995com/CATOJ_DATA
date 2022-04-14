#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int N = 1010;

char s[N], p[N];
int ne[N];

int main() {
  
  	while(cin >> s + 1){
      
      	// #abcabc ababc  s[1] == '#' and s[2] == '\0'
    	if(s[1] == '#' && s[2] == '\0') break;
      	
      	int cnt = 0;
        memset(ne, 0, sizeof ne);
      
      	cin >> p + 1;
      	
      	// 求ne数组 以p为准
      	for(int i = 2, j = 0; p[i]; i++){
        	while(j && p[i] != p[j + 1]) j = ne[j];
          	if(p[i] == p[j + 1]) j++;
          	ne[i] = j;
        }
      
      	int plen = strlen(p + 1);
      	// 匹配 s[] 和 p[]
      	for(int i = 1, j = 0; s[i]; i++){
        	while(j && s[i] != p[j + 1]) j = ne[j];
          	if(s[i] == p[j + 1]) j++;
          
          	if(j == plen){
            	cnt++;
              	j = 0;
            }
        }
      	
      	cout << cnt << endl;
    }
	
	return 0;
}


