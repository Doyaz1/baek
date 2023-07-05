// 다시 풀어보기
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    for(int i = 0; i < queries.size(); i++){
        reverse(my_string.begin() + queries[i][0], my_string.begin() + queries[i][1] + 1); 
        //reverse() : 문자열 거꾸로 뒤집기
        //begin() : 문자열의 첫번째 요소를 가리킴 
    }
    
    return my_string;
}