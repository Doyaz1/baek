#include <iostream>

int main(){

  int a;

  std::cin >> a;

  for(int i = 0; i < a; i++){

    for(int j = a; j > a -i; j--)
      {
        std::cout << " ";
      }
    for(int k = a; k > i; k--)
      {
        std::cout << "*";
      }
    std::cout << std::endl;
  }
  return 0;
}