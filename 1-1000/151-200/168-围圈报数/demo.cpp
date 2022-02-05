#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
  
  	int n, m;
  	vector<int> v;
  	cin >> n >> m;
  	
  	for(int i = 1; i <= n; i++)
      	v.push_back(i);
  
  	int idx = 0, cnt = 0;
  	while(!v.empty()){
    	cnt++;
      	if(cnt == m){
        	cout << v[idx] << endl;
          	v.erase(v.begin() + idx);
          	cnt = 0;
        }
      	else idx = (idx + 1) % v.size();
    }
	
	return 0;
}


