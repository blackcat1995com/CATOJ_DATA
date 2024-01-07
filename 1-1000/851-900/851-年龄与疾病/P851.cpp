#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int a = 0, b = 0, c = 0, d = 0;
    
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        
        if(x <= 18) a++;
        else if(x <= 35) b++;
        else if(x <= 60) c++;
        else d++;
    }

    printf("%.2lf%\n%.2lf%\n%.2lf%\n%.2lf%\n", a * 1.0 / n * 100, b * 1.0 / n * 100, c * 1.0 / n * 100, d * 1.0 / n * 100);

	return 0;
}
