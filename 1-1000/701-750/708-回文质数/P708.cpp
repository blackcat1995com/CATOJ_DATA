/*
构造回文数
只有一个：0、1、2、...、9
偶数：1~9999 镜像操作拼接  123 321 => 123321
奇数：1~999 + 0~9 + 镜像操作拼接 1239321
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int a, b;
vector<int> v;

bool is_prime(int n){
    
    if(n < 2) return false;
    
	for(int i = 2; i <= n / i; i++)
        if(n % i == 0)
            return false;
    
    return true;
}
int main() {

    cin >> a >> b;
    
    for(int i = 0; i < 10; i++)
        if(i >= a && i <= b)
            v.push_back(i);
    
    for(int i = 1; i <= 9999; i++){
        string str1 = to_string(i);
        string str2 = str1;
        reverse(str2.begin(), str2.end());
        // cout << str1 << " " << str2 << endl;
        string str = str1 + str2;
        // cout << str << endl;
        int t = stoi(str);
        // cout << t << endl;
        if(t >= a && t <= b) v.push_back(t);
    }
 
  
    for(int i = 1; i <= 999; i++){
        string str1 = to_string(i);
        string str2 = str1;
        reverse(str2.begin(), str2.end());
       
        for(int j = 0; j < 10; j++){
            string str = str1 + to_string(j) + str2;
            int t = stoi(str);
            // cout << t << endl;
        	if(t >= a && t <= b) v.push_back(t);
        }   
    }
    
    for(auto x: v){
        if(is_prime(x))
            cout << x << endl;
    }

	return 0;
}
