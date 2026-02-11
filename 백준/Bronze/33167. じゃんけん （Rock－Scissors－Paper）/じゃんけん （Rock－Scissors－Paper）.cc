#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int n;
	string y;
	string c;

	cin >> n;

	cin >> y;
	cin >> c;

	int winY = 0;
	int winC = 0;

	for (int i = 0; i < n; i++) {
		if (y[i] == 'R' && c[i] == 'R') {
			winY += 0;
		}
		else if (y[i] == 'S' && c[i] == 'R') {
			winC += 1;
		}
		else if (y[i] == 'R' && c[i] == 'P') {
			winC += 1;
		}
		else if (y[i] == 'S' && c[i] == 'P') {
			winY += 1;
		}
	}
	cout << winY << " " << winC << endl;

	return 0;
}