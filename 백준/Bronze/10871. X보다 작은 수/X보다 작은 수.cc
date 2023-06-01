// 6월 1일 10871번 문제 X보다 작은 수
#include <iostream>

int main(){

  int a, b;
  
  std::cin >> a >> b;
  // 주어지는 정수는 최대 10000
  int x[10000];
  // 수열 a 값 설정
  for(int i = 0; i < a; i++)
  {
    std::cin >> x[i];
  }
  // 수열 a의 값을 토대로 b보다 낮은 값을 출력 
  for(int i = 0; i < a; i++)
  {
    if(x[i] < b)
    {
      std::cout << x[i] << std::endl;
    }
  }
  return 0;
}