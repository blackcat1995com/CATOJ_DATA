#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

void dfs(string in_string, string post_string){

	int len = in_string.size();
	if(!len) return;
	char root = post_string[len - 1];
	cout << root;

	int in_root_num = in_string.find(root);

	string in_left_tree = in_string.substr(0, in_root_num);
	string post_left_tree = post_string.substr(0, in_root_num);

	dfs(in_left_tree, post_left_tree);

	string in_right_tree = in_string.substr(in_root_num + 1);
	string post_right_tree = post_string.substr(in_root_num, len - 1 - in_root_num);

	dfs(in_right_tree, post_right_tree);
}

int main() {

	string in_string, post_string;
	cin >> in_string >> post_string;

	dfs(in_string, post_string);


	return 0;
}

