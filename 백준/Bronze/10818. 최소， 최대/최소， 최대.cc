#include <iostream>
#include <limits>

int main(){

  int n;
  int a, smallest, largest;

  smallest = std::numeric_limits<int>::max();
  largest = std::numeric_limits<int>::min();

  do{
    std::cin >> n;
  }while(n <= 0);

  for(int i = 1; i <= n; i++){
    std::cin >> a;
    if(a < smallest)
      {
        smallest = a; 
      }
    if(a > largest)
      {
        largest = a;
      }
  }
  std::cout << smallest << std::endl;
  std::cout << largest << std::endl;
  return 0;
}