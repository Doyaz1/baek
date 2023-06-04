#include <iostream>

int main(){

  int a;
  double average = 0.0;
  int array[1000] = {0, };
  int max = 0;
  int sum = 0;
  
  std::cin >> a;
  
  for(int i = 1; i <= a; i++)
    std::cin >> array[i];
  
  for(int i = 1; i <= a; i++){
    if(max < array[i]){
      max = array[i];
    }
  }
  
  for(int i = 1; i <= a; i++){
    sum += array[i]; 
  }

  average = (static_cast<double>(sum) / max) / a * 100;
  std::cout << std::fixed;
  std::cout.precision(4);
  std::cout << average;
  return 0;
}