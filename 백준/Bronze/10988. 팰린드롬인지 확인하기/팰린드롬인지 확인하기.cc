//6월 13일 10988번 문제 팰린드롬인지 확인하기 (C++)
#include <iostream>
#include <string>

void reverse(std::string& strg);
bool isPalindrome(std::string& strg);

int main(){

  std::string strg;

  getline(std::cin, strg);
  // 회문일 경우 1, 아닌 경우 0
  if(isPalindrome(strg)){
    std::cout << 1;
  }

  else{
    std::cout << 0;
  }
  return 0;
}
// 문자열을 복사하고 reverse로 뒤집은 후 원래 문자열과 같은지 확인
bool isPalindrome(std::string& strg){
  std::string temp(strg);
  reverse(temp);
  
  return(temp == strg);
}

void reverse(std::string& strg){
  std::string temp(strg);
  int size = strg.size();

  for(int i = 0; i < size; i++){
    strg[i] = temp[size -1 -i];
  }
}