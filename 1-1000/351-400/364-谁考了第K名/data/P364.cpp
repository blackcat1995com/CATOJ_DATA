#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;

struct Student
{
	int number;
	double score;
}stu[101];

bool cmp(Student a, Student b){
	return a.score > b.score;
}
int main()
{
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> stu[i].number >> stu[i].score;
	sort(stu + 1, stu + 1 + n, cmp);
	printf("%d %.6lf\n", stu[k].number, stu[k].score);
	// cout << stu[k].number << " " << stu[k].score << endl;
	return 0;
}
