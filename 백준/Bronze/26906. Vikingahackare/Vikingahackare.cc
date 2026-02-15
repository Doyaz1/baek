#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	int t;

	cin >> t;

	unordered_map<string, char> dict;

	for (int i = 0; i < t; i++) {
		char ch;
		string code;

		cin >> ch >> code;

		dict[code] = ch;
	}

	string s;

	cin >> s;

	for (int i = 0; i < s.size(); i += 4) {
		string part = s.substr(i, 4);

		if (dict.find(part) != dict.end()) {
			cout << dict[part];
		}
		else {
			cout << "?";
		}
	}


	return 0;
}