#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <map>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;

int n;

char g[25][25];

struct Node{
	int dec;
	string hex;
	int cnt;
	Node(){
		hex = "00";
		cnt = 0;
	}
}node[300];

map<string, int> mp;

vector<string> v; // ´æ´¢Ç°16½× 

void init(){
	for(int i = 0; i < 256; i++){
		node[i].dec = i;
		int j = i;
		string hex;
		do{
			char ch;
			if(j % 16 <= 9)
				ch = char('0' + j % 16);
			else
				ch = char('A' + j % 16 - 10);
			hex += ch;
			j /= 16;
		}while(j);
//		cout << hex << endl;
		if(hex.size() == 1)
			node[i].hex[1] = hex[0];
		else{
			node[i].hex[0] = hex[1];
			node[i].hex[1] = hex[0];
		} 
		mp[node[i].hex] = i;
//		cout << node[i].hex << endl;
	}
}

//int get_num(string hex){
//	for(int i = 0; i < 256; i++)
//}
char get_ch(string hex){
	int idx = -1;
	int minv = 1e9;
	int cur = mp[hex];
	for(int i = 0; i < v.size(); i++){
		if(minv > abs(cur - mp[v[i]])){
			minv = abs(cur - mp[v[i]]);
			idx = i;
		}
	}
	
	if(idx <= 9)
		return char('0' + idx);
	else
		return char('A' + idx - 10);
}

bool cmp(Node a, Node b){
	if(a.cnt == b.cnt)
		return a.dec < b.dec;
	return a.cnt > b.cnt;
}
int main() {

	init();
	
	cin >> n;

	for(int i = 0; i < n; i++) cin >> g[i];
	int len = strlen(g[0]);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < len / 2; j++){
			string hex;
			hex += g[i][j * 2];
			hex += g[i][j * 2 + 1];
			node[mp[hex]].cnt++;
		}			

	}
	
	sort(node, node + 300, cmp);
	
	for(int i = 0; i < 16; i++){
		cout << node[i].hex;
		v.push_back(node[i].hex);
	} 
	cout << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < len / 2; j++){
			string hex;
			hex += g[i][j * 2];
			hex += g[i][j * 2 + 1];
			cout << get_ch(hex);
		}
		cout << endl;			
	}
	
	return 0;
}
