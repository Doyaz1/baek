#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {

	int a, b;
	string answer = "";
	string grid[101];

	cin >> a >> b;

	for (int i = 0; i < a; i++) {
		cin >> grid[i];
	}

	for (int j = 0; j < b; j++) {
		for (int i = 0; i < a; i++) {
			if (grid[i][j] != '.') {
				answer += grid[i][j];
				break;
			}
		}
	}
	cout << answer << endl;

	return 0;
}