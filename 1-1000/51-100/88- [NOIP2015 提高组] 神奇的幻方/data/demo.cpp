#include <iostream> 

int a[40][40] = { 0 };

int main() {
	freopen("10.in", "r", stdin);
	freopen("10.out", "w", stdout);
    int n;
    std::cin >> n;            
    int step = 1;     // 填到几了
    int posx, posy; // 上一个点坐标
    while (step <= n * n) {
        if (step == 1) 
            a[posx = 1][posy = n / 2 + 1] = step++;
        else if (posx == 1 && posy != n) 
            a[posx = n][++posy] = step++;
        else if (posx != 1 && posy == n) 
            a[--posx][posy = 1] = step++;
        else if (posx == 1 && posy == n) 
            a[++posx][posy] = step++;
        else if (posx != 1 && posy != n)
            if (a[posx - 1][posy + 1] == 0)
                a[--posx][++posy] = step++;
            else
                a[++posx][posy] = step++;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j)
            std::cout << a[i][j] << " ";
        std::cout << std::endl;
    }
}
