#include <iostream>

int main(){

  int a;

  std::cin >> a;

  int* x = new int [a];

  for(int i = 0; i < a; i++)
      {
        std::cin >> x[i];
      }

  int b;
  int count = 0;
  
  std::cin >> b;

  for(int i = 0; i < a; i++){
    if( x[i] == b)
      {
        count++;
      }
  }
  std::cout << count;
  return 0;
}