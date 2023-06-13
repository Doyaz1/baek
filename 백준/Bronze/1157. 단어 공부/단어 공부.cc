// 6월 13일 1157번 단어 공부 (C++)
#include <iostream>
#include <string>
// 아스키코드에서 대문자 : 65 ~ 90 / 소문자 : 97 ~ 122
int a[26];
int count = 0;
int max = 0;
int index = 0;
std::string s;

int main(){

  std::cin >> s;
  // 최대 빈도수 체크
  for(int i = 0; i < s.length(); i++){
    if(s[i] < 97)
      a[s[i] - 65]++; // 대문자 체크
    
    else
      a[s[i] - 97]++; // 소문자 체크
  } 
  // 입력된 알파벳 체크
  for(int i = 0; i < 26; i++){
    if(max < a[i]){
      max = a[i];
      count = 0;
      index = i;
    }
    if(max == a[i])
      count++;
  }
  // 같은 알파벳이 여러개 = ? / 아니면 대문자로 출력한다
  if(count > 1)
    std::cout << "?";
  else 
    std::cout << (char)(index + 65);
  
  return 0;
}