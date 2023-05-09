#include <iostream>

int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  
  int t;
  int a, b;
  
  std::cin >> t;

  for(int i = 1; i <= t; i++)
    {
      int sum;
      std::cin >> a >> b;
      sum = a + b;
      std::cout << "Case #" << i << ": " << sum << "\n";
    }
  return 0;
}