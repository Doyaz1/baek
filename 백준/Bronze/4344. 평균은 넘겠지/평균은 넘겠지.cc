#include <iostream>
#include <iomanip>

int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int a, b;
  int c[1000] = {0, };
  double average;
  
  std::cin >> a;

  for(int i = 0; i < a; i++){
    int sum = 0;
    int count = 0;

    std::cin >> b;
    
    for(int j = 0; j < b; j++){
      std::cin >> c[j];
      sum = sum + c[j];
    }
      
    sum = sum / b;

    for(int j = 0; j < b; j++){
      if(c[j] > sum)
        count++;
    }
    average = (double)count / b * 100;
    std::cout << std::fixed << std::setprecision(3);
    std::cout << average << "%" << "\n";
  }
  return 0;
}