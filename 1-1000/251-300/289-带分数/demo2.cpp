#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

const int N = 20;

int k, n = 9;
int path[N];
int book[N];
int ans = 0;

vector<string> v;

void dfs(int u){
	if(u > n){
		string s = "";
    	for(int i = 1; i <= n; i++)
    		s += to_string(path[i]);
       	v.push_back(s);
      	return;
    }
  
  	for(int i = 1; i <= n; i++){
    	if(!book[i]){
        	path[u] = i;
          	book[i] = true;
          	dfs(u + 1);
          	book[i] = false;
        }
    }
}

int main() {

	cin >> k;
  
  	dfs(1);

  	for(auto s : v){
  		for(int i = 1; i <= 7; i++){
			for(int j = i + 1; j <= 8; j++){
				string ts1 = s.substr(0, i);
				string ts2 = s.substr(i, j - i);
				string ts3 = s.substr(j);
				int a = stoi(ts1);
				int b = stoi(ts2);
				int c = stoi(ts3);
				if(k * c == a * c + b) ans++;
			}
		}
  	}

  	cout << ans << endl;

	return 0;
}

