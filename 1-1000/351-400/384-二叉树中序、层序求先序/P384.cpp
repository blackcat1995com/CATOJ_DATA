#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

void preOrder(string in_string, string level_string){
	int len = in_string.size();
    if(!len) return;
    
    char root = level_string[0];
    int in_root_idx = in_string.find(root);
    
    cout << root;
    
    string in_left_tree = in_string.substr(0, in_root_idx);
    string in_right_tree = in_string.substr(in_root_idx + 1);
    
    string level_left_tree = level_string.substr(1);
    for(auto x: in_right_tree){
        int p = level_left_tree.find(x);
        level_left_tree.erase(level_left_tree.begin() + p);
    }
    
    string level_right_tree = level_string.substr(1);
    for(auto x: in_left_tree){
        int p = level_right_tree.find(x);
        level_right_tree.erase(level_right_tree.begin() + p);
    }
    
    preOrder(in_left_tree, level_left_tree);
    preOrder(in_right_tree, level_right_tree);
}

int main() {

    string in_string, level_string;
    cin >> in_string >> level_string;
    
    preOrder(in_string, level_string);

	return 0;
}

