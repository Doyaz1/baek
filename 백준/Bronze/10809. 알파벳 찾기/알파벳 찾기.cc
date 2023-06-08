// 6월 8일 10809번 알파벳 찾기 (C++)
#include <iostream>
#include <cstring>

int main(){

  std::string s;
  char a[] = "abcdefghijklmnopqrstuvwxyz";

  std::cin >> s;
  //strlen은 입력 받은 문자 a의 길이, s.find(a[i])는 입력 받은 문자(s)에서
  //a 문자열에 있는 문자를 탐색했을 때 있으면 등장하는 위치의 값을 출력하고, 문자가 없다면 -1을 출력
  for(int i = 0; i < strlen(a); i++){
    std::cout << (int)s.find(a[i]) << " ";
  }
  return 0;
}