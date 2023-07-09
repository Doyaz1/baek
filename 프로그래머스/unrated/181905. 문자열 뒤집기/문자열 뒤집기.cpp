#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = my_string;
    // my_string 인덱스 6부터 12까지 / +1을 해주는 이유는 문자열이 0부터 시작이기 때문
    reverse(answer.begin() + s, answer.begin() + e + 1);
    
    return answer;
}