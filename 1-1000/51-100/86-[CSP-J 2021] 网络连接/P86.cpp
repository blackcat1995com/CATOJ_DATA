#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <string>
#include <map>
#include <sstream>
using namespace std;

typedef long long LL;

int n;
map<string, int> mp;

bool check(string s) {
    LL a, b, c, d, port;
   
    if (sscanf(s.c_str(), "%lld.%lld.%lld.%lld:%lld", &a, &b, &c, &d, &port) != 5) return false;
    //cout << a << " " << b << " " << c << " " << d << " " << port << endl;
    if (a < 0 || a > 255 || b < 0 || b > 255 || c < 0 || c > 255 || d < 0 || d > 255 || port < 0 || port > 65535) return false;
    stringstream ss;
    ss << a << '.' << b << '.' << c << '.' << d << ':' << port;
    return ss.str() == s;
}

int main() {

    cin >> n;

    for (int i = 1; i <= n; i++) {
        string op, ad;
        cin >> op >> ad;
        if (!check(ad)) {
            cout << "ERR" << endl;
            continue;
        }

        if (op == "Server") {
            if (mp[ad]) cout << "FAIL" << endl;
            else {
                mp[ad] = i;
                cout << "OK" << endl;
            }
        }
        else {
            if (mp.find(ad) == mp.end()) cout << "FAIL" << endl;
            else cout << mp[ad] << endl;
        }
    }

    return 0;
}
