#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

struct Student{
	int num;
  	double score;
  	bool operator < (const Student& x) const{
    	return score > x.score;
    }
}stu[110];

int n, k;

int main() {
  
  	cin >> n >> k;
  
  	for(int i = 1; i <= n; i++) cin >> stu[i].num >> stu[i].score;
  
  	sort(stu + 1, stu + n + 1);
  
  	printf("%d %.6lf\n", stu[k].num, stu[k].score);
	
	return 0;
}


