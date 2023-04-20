#include <iostream>
#include <unordered_map>
using namespace std;

int n;
unordered_map<int, int> mp;

int main() {

    cin >> n;
    while(n--){
        int x;
        cin >> x;
        mp[x]++;
    }

    int num, max_cnt = -1;
    for(auto x: mp){
        if(x.second > max_cnt){
            num = x.first;
            max_cnt = x.second;
        }
    }
    
    cout << num << " " << max_cnt << endl;
    
	return 0;
}

