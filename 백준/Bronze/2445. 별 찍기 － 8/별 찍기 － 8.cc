//6월 10일 2445번 별 찍기 - 8 C++
#include <iostream>

int main(){

    int a;

    std::cin >> a;

    for(int i = 0; i < a; i++){
      for(int j = 0; j < i +1; j++){
        std::cout << "*";
      }
      for(int j = 0; j < 2*(a -i -1); j++){
        std::cout << " ";
      }
      for(int j = 0; j < i +1; j++){
        std::cout << "*";
      }
      std::cout << std::endl;
    }

    for(int i = 0; i < a -1; i++){
      for(int j = 0; j < a -i -1; j++){
        std::cout << "*";
      }
      for(int j = 0; j < 2 *(i +1); j++){
        std::cout << " ";
      }
      for(int j = 0; j < a -i -1; j++){
        std::cout << "*";
      }
      std::cout << std::endl;
    }
  return 0;
}