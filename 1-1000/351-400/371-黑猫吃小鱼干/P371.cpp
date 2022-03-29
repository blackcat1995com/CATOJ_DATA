#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

const int N = 1e6 + 10;
int n, cnt = 0, idx = 0;
vector<int> v[N];

int main() {

	cin >> n;
	for(int a = 1; a <= 3; a++)
		for(int b = 1; b <= 3; b++)
			for(int c = 1; c <= 3; c++)
				for(int d = 1; d <= 3; d++)
					for(int e = 1; e <= 3; e++)
						for(int f = 1; f <= 3; f++)
							for(int g = 1; g <= 3; g++)
								for(int h = 1; h <= 3; h++)
									for(int i = 1; i <= 3; i++)
										for(int j = 1; j <= 3; j++)
											if(a + b + c + d + e + f + g + h + i + j == n){
												cnt++, idx++;
												v[idx].push_back(a);
												v[idx].push_back(b);
												v[idx].push_back(c);
												v[idx].push_back(d);
												v[idx].push_back(e);
												v[idx].push_back(f);
												v[idx].push_back(g);
												v[idx].push_back(h);
												v[idx].push_back(i);
												v[idx].push_back(j);
											}

	cout << cnt << endl;
	for(int i = 1; i <= idx; i++){
		for(auto x : v[i])
			cout << x << " ";
		puts("");
	}
	
	return 0;
											
}

