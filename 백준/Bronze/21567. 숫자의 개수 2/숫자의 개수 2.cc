#include <iostream>

int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  long a, b, c;
  long d;
  long array[10] = {};
  
  std::cin >> a >> b >> c;

  d = a * b * c;

  while ( d > 0){
    array[d % 10]++;
    d /= 10;
  }
  for (int i = 0; i < 10; i++){
    std::cout << array[i] << "\n";
  }
  return 0;
}