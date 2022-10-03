#include <iostream>
#include <cstdio>
using namespace std;

const int N = 3146100;
typedef long long LL;
  
int A = 3e6, T = 146097, G = A + T;

int D[N], M[N], Y[N];

int months[13] = {
	0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

bool is_leap(int year){
	if(year <= 1582) return year > 0 ? (year % 4 == 0) : (year % 4 == -1);
  	else return year % 4 == 0 && year % 100 || year % 400 == 0;
}

int get_maxday(int year, int month){
	if(month == 2)
		return months[month] + is_leap(year);
	return months[month];
}

void init(){
	int d = 1, m = 1, y = -4713;
  	for(int i = 0; i <= G; i++){
    	D[i] = d, M[i] = m, Y[i] = y;
      	if(d == 4 && m == 10 && y == 1582) d = 15;
      	else if(d == get_maxday(y, m)){
        	d = 1;
          	if(m == 12){
            	m = 1; 
              	y++;
              	if(y == 0) y++;
            }
          	else m++;
        }
      	else d++;
    }
}

void output(int d, int m, int y){
	if(y < 0) printf("%d %d %d BC\n", d, m, -y);
  	else printf("%d %d %d\n", d, m, y);
}

int main() {
	
	init();
  
  	int Q;
  	cin >> Q;
  
  	while(Q--){
    	LL r;
      	cin >> r;
      	if(r <= A) output(D[r], M[r], Y[r]);
      	else{
        	int k = A + (r - A) % T;
          	output(D[k], M[k], Y[k] + (r - A) / T * 400);
        }
    }
	
	return 0;
}

