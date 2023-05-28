#include <iostream>

int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int a, b, T;
  int sum;
  
  std::cin >> T;
  for(int i = 0; i < T; i++){
    std::cin >> a >> b;
    sum = a + b;
    std::cout << sum << "\n";
  }
  return 0;
}
  