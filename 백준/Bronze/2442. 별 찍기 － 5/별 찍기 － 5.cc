#include <iostream>

int main() {

  int a;

  std::cin >> a;

for(int i = 1; i <= a; i++)
{
  for(int j = i; j < a; j++)
    {
      std::cout << " ";
    }
  for(int k = 0; k < i *2 -1; k++)
    {
      std::cout << "*";
    }
  std::cout << std::endl;
}
  return 0;
}