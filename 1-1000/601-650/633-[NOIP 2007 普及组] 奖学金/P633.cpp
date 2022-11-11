#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 310;

struct Student{
	int id, Chinese, total;
  	bool operator < (const Student& x){
    	if(total == x.total){
        	if(Chinese == x.Chinese)
              	return id < x.id;
          	return Chinese > x.Chinese;
        }
      	
      	return total > x.total;
    }
}stu[N];

int main() {
  
  	int n, Math, English;
  	cin >> n;
  	for(int i = 1; i <= n; i++){
    	stu[i].id = i;
      	cin >> stu[i].Chinese >> Math >> English;
      	stu[i].total = stu[i].Chinese + Math + English;
    }

	sort(stu + 1, stu + n + 1);
  	
  	for(int i = 1; i <= 5; i++) cout << stu[i].id << " " << stu[i].total << endl;
      
	return 0;
}
