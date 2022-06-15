#include <iostream>
#include <cstdio>
using namespace std;

int n, cnt = 0;

void moveTower(int n, char from, char to, char buffer){
	if(!n) return;
  
  	moveTower(n - 1, from, buffer, to);
  
  	printf("%d :from %c-->%c\n", ++cnt, from, to);
  
  	moveTower(n - 1, buffer, to, from);
}

int main() {
  
  	cin >> n;
  	moveTower(n, 'a', 'c', 'b');

	return 0;
}

