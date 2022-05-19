#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

set<int> st;
int main() {
    
    int n;
    scanf("%d", &n);
    
    while(n--){
        char op[2];
        int x;
        scanf("%s%d", op, &x);
        
        if(*op == 'I') st.insert(x);
        else{
            auto it = st.find(x);
            if(it != st.end()) puts("Yes");
            else puts("No");
        }
    }
	
	return 0;
}
