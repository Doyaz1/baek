#include <iostream>

int main(){
  
  std::string s;
  
  std::cin >> s;

  std::cout << s.length();
  return 0;
}
// 또 다른 풀이
// #include <iostream>
// #include <cstring>

// int main(){

//   char s[101];
  
//   std::cin >> s;
  
//   std::cout << strlen(s) << std::endl;
// }