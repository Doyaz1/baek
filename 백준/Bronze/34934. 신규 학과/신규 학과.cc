#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int n;
	int y;
	string s;

	cin >> n;

	string name;
	int maxY = 0;

	for (int i = 0; i < n; i++) {
		cin >> s >> y;
		
		if (y > maxY) {
			maxY = y;
			name = s;
		}
	}

	cout << name << endl;


	return 0;
}