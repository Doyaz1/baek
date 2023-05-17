#include <iostream>

int main(){

  int a, b;

  std::cin >> a;
  std::cin >> b;

  std::cout << a * (b % 10) << std::endl; // ( 385 % 10 = 5)
  std::cout << a * ((b % 100) / 10) << std::endl; //(385 % 100 = 85), (85 / 10 = 8)
  std::cout << a * (b / 100) << std::endl; // (385 / 100 = 3)
  std::cout << a * b;

  return 0;
}