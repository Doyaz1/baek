//6월 4일 5597번 - 과제 안 내신 분?
#include <iostream>

int main(){

  int a;
  bool num[31] = {0, }; // 1번 ~ 30번까지 출석번호
  // 출석 번호 입력 후 index 값들을 1로 다시 초기화(즉 여기에 있는 입력되지 않은 값들은 0인 상태로 만듦)
  for(int i = 0; i < 28; i++){
    std::cin >> a;
    num[a] = 1;
  }
  // num[a]에 들어있는 배열을 다시 확인하면서 1이 아닌 0인 것을 차례대로 출력
  for(int j = 1; j < 31; j++){ // 1번 ~ 30번까지 출석번호
    if(num[j] == 0)
    std::cout << j << std::endl;
  }
  return 0;
}