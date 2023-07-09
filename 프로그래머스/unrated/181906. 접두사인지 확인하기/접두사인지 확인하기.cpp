#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    //== is_prefix ? 1 : 0; <= 이 부분은 is_prefix와 값이 일치하면 1 아니라면 0을 추출한다
    int answer = my_string.substr(0, is_prefix.length()) == is_prefix ? 1 : 0;
    
  
    
    return answer;
}