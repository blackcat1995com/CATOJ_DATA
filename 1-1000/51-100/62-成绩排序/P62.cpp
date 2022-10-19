#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

struct Node {
	string num, name, gender;
	int age;
	double score;

	bool operator < (const Node& x) const {
		return score > x.score;
	}
}node[110];

int n;

int main() {

	cin >> n;

	for (int i = 1; i <= n; i++) 
		cin >> node[i].num >> node[i].name >> node[i].gender >> node[i].age >> node[i].score;
	
	sort(node + 1, node + n + 1);

	for (int i = 1; i <= n; i++)
		cout << node[i].num << " " << node[i].name << " " << node[i].gender << " " << node[i].age << " " << node[i].score << endl;


	return 0;
}

