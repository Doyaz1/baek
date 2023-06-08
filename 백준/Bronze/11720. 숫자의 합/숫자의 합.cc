// 6월 8일 11720번 숫자의 합 - 문자열 (C++)
#include <iostream>

int main(){

  int a;
  char s[100] = {};
  int sum = 0;
  
  std::cin >> a;

  for(int i = 0; i < a; i++){
    std::cin >> s[i];
  }
  // char형에 숫자를 입력 받았기 때문에 우리가 원하는 값(숫자)를 얻으려면 char형에 들어가는 아스키코드 '0' or 48 값을 빼주면 된다.
  for(int i = 0; i < a; i++){
    sum += s[i] - '0'; // 또는 sum += s[i] - 48;
  }
  
  std::cout << sum;
  return 0;
}
  
  