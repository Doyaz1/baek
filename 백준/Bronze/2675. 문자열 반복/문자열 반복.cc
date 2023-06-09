//6월 9일 2675번 문자열 반복 (C++)
#include <iostream>
#include <string>

int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  
  int T, R;
  std::string S;

  std::cin >> T;

  for(int i = 0; i < T; i++){
    std::cin >> R >> S;
    for(int j = 0; j < S.length(); j++){
      for(int k = 0; k < R; k++)
        std::cout << S[j];
    }
    std::cout << "\n";
  }
  return 0;
}