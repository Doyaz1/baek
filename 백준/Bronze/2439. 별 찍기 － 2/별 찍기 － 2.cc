#include <iostream>

int main(){
  
  int a;

  std::cin >> a;

  for(int i = 0; i < a; i++)
    {
      for(int j = 0; j > i -a +1; --j)
        {
          std::cout << " ";
        }
      for(int k = 0; k < i +1; k++)
        {
          std::cout << "*";
        }
      std::cout << std::endl;
    }
  return 0;
}