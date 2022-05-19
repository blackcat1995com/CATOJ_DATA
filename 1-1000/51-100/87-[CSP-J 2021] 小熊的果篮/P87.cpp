#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int n;
set<int> s[2];

int main() {
  
  	scanf("%d", &n);
          
    for(int i = 1; i <= n; i++){
    	int x;
      	scanf("%d", &x);
      	s[x].insert(i);
    }
          
    while(s[0].size() || s[1].size()){
    	if(s[0].empty()){
        	for(auto x : s[1])
              	printf("%d\n", x);
          	return 0;
        }
      	
      	if(s[1].empty()){
        	for(auto x : s[0])
              	printf("%d\n", x);
          	return 0;
        }
      
      	int last = 0;
      	int t = *s[1].begin() < *s[0].begin();
      	while(true){
        	set<int>::iterator it = s[t].upper_bound(last);
          	if(it == s[t].end()) break;
          	printf("%d ", *it);
          	last = *it;
          	s[t].erase(it);
          	t ^= 1;
        }
      	puts("");
    }

	return 0;
}

