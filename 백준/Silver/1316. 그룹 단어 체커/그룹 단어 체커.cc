//6월 15일 1316번 그룹 단어 체커 (C++)
#include <iostream>
#include <string>

int main(){

  int a;
  int count = 0;
  std::string s;

  std::cin >> a;

  for(int i = 0; i < a; i++){
    std::cin >> s;
    int size = s.length();
    bool flag = true;
    // 입력한 문자가 앞에 있던 문자와 비교했을 때 같지 않고 이전에 나왔었다면 그룹 단어가 아닌 것으로 간주하고 false
    for(int j = 0; j < size; j++){
      for(int k = 0; k < j; k++){
        if(s[j] != s[j - 1] && s[j] == s[k]){
          flag = false;
          break;
        }
      }
    }
    if(flag)
      count++;
  }
  std::cout << count;

  return 0;
}