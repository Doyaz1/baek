#include <iostream>

int main(){
  
  int a;

  std::cin >> a;

  for(int count1 = 0; count1 < a; count1++)
    {
      for(int count2 = 0; count2 < count1 +1; count2++)
        {
          std::cout << "*";
        }
          std::cout << std::endl;
    }
  return 0;
}