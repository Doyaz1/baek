#include <iostream>

int main(){
  
  int t;
  int a, b;
  
  std::cin >> t;

  for(int i = 1; i <= t; i++)
    {
      int sum;
      std::cin >> a >> b;
      sum = a + b;
      std::cout << "Case #" << i << ": " << sum << std::endl;
    }
  return 0;
}