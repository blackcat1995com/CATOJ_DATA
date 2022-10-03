#include <iostream>
#include <cstdio>
#include <deque>
using namespace std;

const int N = 1e6 + 10;

int T, n, p;
int a[N];
char b[N];

int main() {
  
  	cin >> T;
  
  	while(T--){
    	cin >> n;
      	n *= 2;
      	for(int i = 1; i <= n; i++) cin >> a[i];
      
      	// 第一种：从L开始
      	b[1] = 'L', b[n] = 'L';
      	p = 2;
      	deque<int> q1, q2;
      	while(a[p] != a[1]) q1.push_back(a[p++]);
      	p++;
      	while(p <= n) q2.push_back(a[p++]);
      
      	p = 2;
      
      	while(true){
        	// LL
          	if(q1.size() >= 2 && (q1.front() == q1.back())){
            	b[p] = 'L';
              	b[n - p + 1] = 'L';
              	q1.pop_front();
              	q1.pop_back();
              	p++;
              	continue;
            }
          	
          	// LR
          	if(q1.size() && q2.size() && (q1.front() == q2.front())){
            	b[p] = 'L';
              	b[n - p + 1] = 'R';
              	q1.pop_front();
              	q2.pop_front();
              	p++;
              	continue;
            }
          
          	// RL
          	if(q1.size() && q2.size() && (q1.back() == q2.back())){
            	b[p] = 'R';
              	b[n - p + 1] = 'L';
              	q1.pop_back();
              	q2.pop_back();
              	p++;
              	continue;
            }
          
          	// RR
          	if(q2.size() >= 2 && (q2.front() == q2.back())){
            	b[p] = 'R';
              	b[n - p + 1] = 'R';
              	q2.pop_front();
              	q2.pop_back();
              	p++;
              	continue;
            }
          	break;
        }
      	
      	if(q1.empty() && q2.empty()){
      		for(int i = 1; i <= n; i++) cout << b[i];
        	puts("");
        	continue;
      	}
      
      	// 第二种：从R开始
      	b[1] = 'R', b[n] = 'L';
      	p = 1;
      	q1.clear();
      	q2.clear();
      	while(a[p] != a[n]) q1.push_back(a[p++]);
      	p++;
      	while(p < n) q2.push_back(a[p++]);
      
      	p = 2;
      
      	while(true){
        	// LL
          	if(q1.size() >= 2 && (q1.front() == q1.back())){
            	b[p] = 'L';
              	b[n - p + 1] = 'L';
              	q1.pop_front();
              	q1.pop_back();
              	p++;
              	continue;
            }
          	
          	// LR
          	if(q1.size() && q2.size() && (q1.front() == q2.front())){
            	b[p] = 'L';
              	b[n - p + 1] = 'R';
              	q1.pop_front();
              	q2.pop_front();
              	p++;
              	continue;
            }
          
          	// RL
          	if(q1.size() && q2.size() && (q1.back() == q2.back())){
            	b[p] = 'R';
              	b[n - p + 1] = 'L';
              	q1.pop_back();
              	q2.pop_back();
              	p++;
              	continue;
            }
          
          	// RR
          	if(q2.size() >= 2 && (q2.front() == q2.back())){
            	b[p] = 'R';
              	b[n - p + 1] = 'R';
              	q2.pop_front();
              	q2.pop_back();
              	p++;
              	continue;
            }
          	break;
        }
      	
      	if(q1.empty() && q2.empty()){
      		for(int i = 1; i <= n; i++) cout << b[i];
        	puts("");
        	continue;
      	}
      
      	puts("-1");
    }
	
	return 0;
}

