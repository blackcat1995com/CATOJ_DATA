#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Node {
	string username;
	vector<string> webpage;
};

vector<Node> v;
int main() {
	int n, m; // n个人， m条上网记录
	cin >> n >> m;
	string username, webpage;
	for (int i = 0; i < m; i++) {
		cin >> username >> webpage;
		bool flag = false;	// 假定新的节点 username 在现有节点中不存在
		for (int j = 0; j < v.size(); j++) {
			if (v[j].username == username) {
				v[j].webpage.push_back(webpage);
				flag = true;
				break;
			}
		}
		if (!flag) {
			Node newnode;
			newnode.username = username;
			//newnode.webpage.clear();
			newnode.webpage.push_back(webpage);
			v.push_back(newnode);
		}
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].username;
		for (int j = 0; j < v[i].webpage.size(); j++) {
			cout << " " << v[i].webpage[j];
		}
		cout << endl;
	}
	return 0;
}

/*
5 7
goodstudyer bookshopa
likespacea spaceweb
goodstudyer bookshopb
likespaceb spaceweb
likespacec spaceweb
likespacea juiceshop
gameplayer gameweb

*/
