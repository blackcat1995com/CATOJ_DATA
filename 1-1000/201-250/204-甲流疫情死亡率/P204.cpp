#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main(){
  
  int a,b;
  cin >> a >> b;
  cout << fixed << setprecision(3) << b * 100.0 / a  <<  '%' << endl;
  
  return 0;
}
