#include <iostream>
using namespace std;

int D, H, M;

int main() {

	cin >> D >> H >> M;

	int res = M - 11 + 60 * (H - 11) + 24 * 60 * (D - 11);
    
    if(res >= 0)
    	cout << res << endl;
    else
        cout << -1 << endl;

	 
	return 0;
}

