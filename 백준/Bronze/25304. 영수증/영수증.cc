#include <iostream>

int main(){
  
  int X;
  int a;
  int z, x;
  int sum = 0;

  std::cin >> X;
  std::cin >> a;

  for(int i = 1; i <= a; i++)
    {
      std::cin >> z >> x;
      sum = sum + z * x;
    }
  if(sum == X){
    std::cout << "Yes";
  }
  else{
    std::cout << "No";
  }
  return 0;
}