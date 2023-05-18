#include <iostream>

int main(){

  int x, y;

  std::cin >> x;
  std::cin >> y;

  if((x > 0) && (0 < y)){
    std::cout << 1;
  }
  else if((x < 0) && (0 < y)){
    std::cout << 2;
  }  
  else if((x < 0) && ( 0 > y)){
    std::cout << 3;
  }
  else if((x > 0) && (0 > y)){
    std::cout << 4;
  }
  return 0;
}