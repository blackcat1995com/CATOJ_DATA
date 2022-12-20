#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

void postOrder(string pre_string, string in_string){
    int len = pre_string.size();
    if(!len) return;
    
    char root = pre_string[0];
    int in_root_idx = in_string.find(root);
    
    string pre_left_tree = pre_string.substr(1, in_root_idx);
    string in_left_tree = in_string.substr(0, in_root_idx);
    
    postOrder(pre_left_tree, in_left_tree);
    
    string pre_right_tree = pre_string.substr(in_root_idx + 1);
    string in_right_tree = in_string.substr(in_root_idx + 1);
    
    postOrder(pre_right_tree, in_right_tree);
    
    cout << root;
}

int main() {

	string pre_string, in_string;
    cin >> pre_string >> in_string;
    
    postOrder(pre_string, in_string);
    
	return 0;
}

