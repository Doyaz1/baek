#include <iostream>
#include <algorithm>
 
using namespace std;

int main() {
	
	int iFc, iSc;

	cin >> iFc >> iSc;

	int iMc = max(iFc, iSc);

	if (iFc == iSc) {
		cout << iFc;
	}
	else {
		cout << iMc;
	}

	return 0;
}