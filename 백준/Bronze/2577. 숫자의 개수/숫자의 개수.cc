#include <iostream>

int main(){

  int count [10] = {};
  int a, b, c;

  std::cin >> a >> b >> c;

  int d = a * b * c;

  while(d != 0){
    count[d % 10]++;
    d /= 10;
  }
  
  for(int f : count){
    std::cout << f << "\n";
  }
  return 0;
}