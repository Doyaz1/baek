#include <iostream>

int main() {
	int score;
	char grade;

	std::cin >> score;

	switch (score / 10) {
	case 10: grade = 'A';
			break;
	case 9: grade = 'A';
			break;
	case 8: grade = 'B';
			break;
	case 7: grade = 'C';
			break;
	case 6: grade = 'D';
			break;
	default: grade = 'F';
	}

	std::cout << grade;

	return 0;
}