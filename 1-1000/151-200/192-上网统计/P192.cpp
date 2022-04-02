#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

struct Node{
	string username;
  	vector<string> webpage;
};

int n, m;
vector<Node> v;

int main() {
  
  	cin >> n >> m;
  	while(m--){
    	string username, webpage;
      	cin >> username >> webpage;
      	bool flag = false;
      
      	for(auto& x : v){
        	if(x.username == username){
            	x.webpage.push_back(webpage);
              	flag = true;
              	break;
            }
        }
      	if(!flag){
        	Node newnode;
          	newnode.username = usrname;
          	newnode.webpage.push_back(webpage);
          	v.push_back(newnode);
        }
    }
  
  	for(auto x : v){
    	cout << x.username;
      	for(auto y : x.webpage)
          	cout << " " << y;
      	puts("");
    }
	
	return 0;
}


