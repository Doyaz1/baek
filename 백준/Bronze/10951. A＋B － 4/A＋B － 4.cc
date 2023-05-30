#include <iostream>

int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int a, b;
  
  while(std::cin >> a >> b){
      std::cout << a + b << "\n";
    }
  return 0;
}