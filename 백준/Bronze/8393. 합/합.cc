#include <iostream>

int main(){

  int a;
  int sum = 0;
  
  std::cin >> a;

  int counter = 1;
  while(counter <= a)
    {
      sum += counter;
      counter++;
    }
  std::cout << sum;
  return 0;
}