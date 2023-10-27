#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

typedef long long LL;

const int N = 110;

LL n;
int a[N][8], row = 0, len = 0;

int main() {

    cin >> n;
    
    for(int i = 0, t = 0; i < 64; i++){
        int x = n >> i & 1;
        a[row][t++] = x;
        if(x) len = row;
        if(t == 7){
            t = 0;
            row++;
        }   
    }
    
    //cout << len << " " << row << endl;
    for(int i = 0; i <= len; i++){
        if(i < len) a[i][7] = 1;
    }
    
    /*
	for(int i = 0; i <= len; i++){
        for(int j = 0; j < 8; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    */
    // 9E 07
    for(int i = 0; i <= len; i++){
        int x = 0;
        for(int j = 0; j < 8; j++)
            if(a[i][j])
                x += 1 << j;
        int high = x >> 4;
        int low = x & 0xf;
        if(high <= 9) cout << high;
        else cout << char('A' + high - 10);
        
        if(low <= 9) cout << low;
        else cout << char('A' + low - 10);
        
        cout << " ";
    }
	return 0;
}

