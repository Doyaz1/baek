//6월 15일 별 찍기 - 12 (C++)
#include <iostream>

int main(){

  int a;

  std::cin >> a;

  for(int i = 1; i <= a; i++){
    for(int j = 0; j < a -i; j++){
      std::cout << " ";
    }
    for(int k = 0; k < i; k++){
      std::cout << "*";
    }
    std::cout << std::endl;
  }

  for(int i = 1; i < a; i++){
    for(int j = 0; j < i; j++){
      std::cout << " ";
    }
    for(int k = 0; k < a -i; k++){
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  return 0;
}
