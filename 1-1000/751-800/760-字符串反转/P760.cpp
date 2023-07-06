#include <iostream>
#include <string>
using namespace std;

int main() {

	int T;
	cin >> T;
	cin.ignore();

	while (T--) {
		string str;
		getline(cin, str);

		int k = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == ' ') {
				for (int j = i - 1; j >= k; j--)
					cout << str[j];
				k = i + 1;
				cout << " ";
			}
		}

		for (int i = str.size() - 1; i >= k; i--)
			cout << str[i];

		cout << endl;
	}

	return 0;
}

