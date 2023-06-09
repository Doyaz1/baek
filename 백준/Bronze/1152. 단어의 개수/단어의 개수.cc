#include <iostream>
#include <string>

int main(){

  int count = 1;
  std::string s;
  getline(std::cin, s); // getline(std::cin, s); = '\n'까지
                        // getline(std::cin, s, 'c'); = 'c'까지 
  //문자열 s를 탐색하면서 공백이 있을 경우 카운트를 늘려주는 방식
  for(int i = 0; i < s.length(); i++){
    if(s[i] == ' ')
      count++;
  }
  //첫째줄과 마지막줄에 있는 공백은 제외 우리는 단어의 개수를 구해야하기 때문
  if(s[0] == ' ')
    count--;
  if(s[s.length() -1] == ' ')
    count--;

  std::cout << count;
  return 0;
}
  