#include <iostream>

int main() {

    int K, Q, R, B, KN, P;

    std::cin >> K >> Q >> R >> B >> KN >> P;

    std::cout << (1 - K) << " " << (1 - Q) << " " << (2 - R) << " " << (2 - B) << " " <<
        (2 - KN) << " " << (8 - P);

    return 0;
}