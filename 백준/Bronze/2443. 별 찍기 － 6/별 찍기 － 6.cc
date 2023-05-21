#include <iostream>

int main(){

  int a;

  std::cin >> a;

  for(int i = 0; i < a; i++){

    for(int j = 0; j < i; j++)
      {
        std::cout << " ";
      }

    for(int k = 0; k < 2 * a - (2*i+1); k++)
      {
        std::cout << "*";
      }
    std::cout << std::endl;
  }
  return 0;
}