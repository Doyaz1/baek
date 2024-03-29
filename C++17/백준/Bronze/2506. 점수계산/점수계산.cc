#include <iostream>

using namespace std;

int main() {
	int num, count = 0, sum = 0, a;
    
	cin >> num;

	for (int i = 0; i < num; i++){
		cin >> a;
		if (a == 0){
			count = 0;
        }
		else if (a == 1){
			count++;
			sum += count;
		}
	}
	cout << sum;
}