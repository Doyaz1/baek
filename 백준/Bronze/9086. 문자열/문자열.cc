#include <iostream>
#include <cstring>

int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int T;
  std::string s;

  std::cin >> T;
  //테스트 케이스 개수 T, 항상 마지막에 '\0' NULL 문자가 있다는 걸 기억
  for(int i = 0; i < T; i++){
    std::cin >> s;
    std::cout << s[0] << s[s.length() -1] << "\n";
  }
  return 0;
}
