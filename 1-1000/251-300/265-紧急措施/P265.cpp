#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

struct Node{
	string username, passwd, email;
};

int n;
string email;
bool is_find = false;

int main() {
  
  	cin >> email >> n;
  
  	while(n--){
    	Node node;
      	cin >> node.username >> node.passwd >> node.email;
      	if(node.email == email){
        	is_find = true;
          	for(auto& x : node.passwd){
            	if(x >= 'a' && x <= 'z')
                  	x -= 32;
              	else if(x >= 'A' && x <= 'Z')
                  	x += 32;
            }
          
          	cout << node.username << " " << node.passwd << endl;
        }
    }
  
  	if(!is_find) puts("empty");
	
	return 0;
}


