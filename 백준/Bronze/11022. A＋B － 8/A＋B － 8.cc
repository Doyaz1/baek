#include <iostream>

int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int T, a, b;

  std::cin >> T;

  for(int i = 1; i <= T; i++)
    {
      int sum;
      std::cin >> a >> b;
      sum = a + b;
      std::cout << "Case #" << i << ": " << a << " + " << b << " = " << sum << "\n";
    }
  return 0;
}