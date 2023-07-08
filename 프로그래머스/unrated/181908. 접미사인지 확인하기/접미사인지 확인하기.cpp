#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    
    //역방향 탐색을 하는 rfind() 함수를 사용하여 is_suffix가 my_string 어디에 위치하는지 찾는다
    size_t found = my_string.rfind(is_suffix);
    //string::npos => 찾는 문자열이 없는 경우 string::npos를 반환하는 코드
    //npos를 반환하지 않고 is_suffix가 my_string의 끝에서 시작하면 1, 그게 아니라면 0을 answer에 저장
    if(found != string::npos && found == my_string.size() - is_suffix.size()){
        answer = 1;
    }
    else{
        answer = 0;
    }
    
    return answer;
}