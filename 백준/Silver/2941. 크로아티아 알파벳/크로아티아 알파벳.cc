// 6월 14일 2941번 크로아티아 알파벳
#include <iostream>
#include <string>

int main(){

  std::string s;
  std::string strg[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};  
  int index;
  
  std:: cin >> s;

  for(int i = 0; i < 8; i++){
    while(true){
      index = s.find(strg[i]);
      if(index == std::string::npos) // 찾는 문자열이 없는 경우 반환되는 코드
        break;

      s.replace(index, strg[i].length(), "a"); // index부터 strg[i]의 길이만큼, "a" 로 치환
    }
  }
  std::cout << s.length();
  return 0;
}