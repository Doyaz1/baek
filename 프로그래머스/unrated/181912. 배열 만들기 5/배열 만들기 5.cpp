#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    for(const auto& str : intStrs){
        // stoi : 문자열을 정수로 변환 / substr : 문자열 자르기
        int a = stoi(str.substr(s, l));
        if(a > k){
            answer.push_back(a);
        }
    }
    return answer;
}