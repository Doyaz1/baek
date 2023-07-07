#include <string>
#include <vector>
// sort() 함수를 사용하기 위해서는 <algorithm> 헤더가 필요하다
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    for(int i = 0; i < my_string.size(); i++){
        answer.push_back(my_string.substr(i));
    }
    // 벡터의 오름차순 정렬
    // +) 내림차순은 Greater 함수 사용
    sort(answer.begin(), answer.end());
    
    return answer;
}