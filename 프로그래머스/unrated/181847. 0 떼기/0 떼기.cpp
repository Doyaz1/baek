#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    //to_string : 숫자 타입의 데이터를 스트링 타입으로 변환
    //stoi : string 같은 문자열을 부호있는 정수로 변환값을 리턴
    
    answer = to_string(stoi(n_str));
    
    return answer;
}