#include <iostream>
#include <cstdio>
#include <queue> 
#include <cstring>
using namespace std;

char str[110];
priority_queue<int> q;

bool is_aeiouy(char ch){
	if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y')
		return true;
	return false;
}

int main() {

	scanf("%s", str + 1);
	int len = strlen(str + 1);

	int pre_idx = 0, ans = 0;

	for(int i = 1; i <= len + 1; i++){
		if(is_aeiouy(str[i]) || i == len + 1){
			q.push(i - pre_idx);
			pre_idx = i;
		}
	}

	printf("%d\n", q.top());
	
	return 0;
}

