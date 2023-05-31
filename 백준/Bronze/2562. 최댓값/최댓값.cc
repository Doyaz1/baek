#include <iostream>

int main(){
  // 배열 크기 설정
  int x[9];
  // 배열 값 설정
  for(int i = 0; i < 9; i++)
  {
    std::cin >> x[i];    
  }
  // 쓰레기 값이 들어가지 않기 위한 최댓값, 순서값 변수 초기화
  int max = -1; 
  int seq = 0; 
  // 설정 값을 토대로 비교하며 최댓값과 순서값 도출
  for(int i = 0; i < 9; i++){
    if(max < x[i])
    {
      max = x[i];
      seq = i;
    }
  }
  std::cout << max << std::endl;
  std::cout << seq +1 << std::endl;
  return 0;
}