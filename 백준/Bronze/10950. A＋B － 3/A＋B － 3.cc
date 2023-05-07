#include <iostream>

int main(){

  int a, b, t;
  
  std::cin >> t;

  for(int i = 0; i < t; i++)
    {
      int sum;
      std::cin >> a;
      std::cin >> b;
      sum = a + b;
      std::cout << sum << std::endl;
    }
  return 0;
}