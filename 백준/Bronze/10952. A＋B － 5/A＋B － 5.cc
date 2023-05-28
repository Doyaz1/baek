#include <iostream>

int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int a, b;
  int sum;

  while(true){
    std::cin >> a >> b;
    sum = a + b;
  
    if (a == 0 && b == 0){
      break;
    }
  std::cout << sum << "\n";
  }
  return 0;
}