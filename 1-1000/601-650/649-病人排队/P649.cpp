#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct People{
	int num;
  	string id;
  	int age;
  	
  	bool operator < (const People& x) const{
    	if(age == x.age)
          	return num < x.num;
      	return age > x.age;
    }
};

int n;
vector<People> v1, v2;

int main() {

	cin >> n;
  	for(int i = 1; i <= n; i++){
    	string id;
      	int age;
      	cin >> id >> age;
      	People peo = {i, id, age};
      	if(age >= 60) v1.push_back(peo);
        else v2.push_back(peo);
    }
  
  	sort(v1.begin(), v1.end());
  
  	for(auto x: v1) cout << x.id << endl;
  	for(auto x: v2) cout << x.id << endl;
  
	return 0;
}
