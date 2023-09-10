#include <iostream>
#include <set>
using namespace std;

const int N = 1e5 + 10;

int n, k;
int a[N];
set<int> st;

int res = 0;

int main(){
    
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        st.insert(a[i]);
    }
    
    st.clear();
    
    for(int i = 1; i <= n; i++){
        
        if(i == n){
            if(st.size() == k) res += 2;
            else res++;
            continue;
        }
        
        st.insert(a[i]);
        if(st.size() == k){
            res++;
            st.clear();
        }
    }
    
    cout << res << endl;

	return 0;
}