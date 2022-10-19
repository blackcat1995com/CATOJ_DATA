#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int n;
vector<double> v1, v2;

int main() {

	cin >> n;
  	for(int i = 1; i <= n; i++){
      	string gender;
      	double x;
    	cin >> gender >> x;
      	if(gender == "male") v1.push_back(x);
      	else v2.push_back(x);
    }
  
  	sort(v1.begin(), v1.end());
  	sort(v2.begin(), v2.end(), greater<double>());
  
  	for(auto x: v1) printf("%.2lf ", x);
  	for(auto x: v2) printf("%.2lf ", x);
  
	return 0;
}
