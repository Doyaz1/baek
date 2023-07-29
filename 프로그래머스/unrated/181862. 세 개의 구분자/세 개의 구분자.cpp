// 다시풀기

#include <string>
#include <vector>
#include <sstream>
#include <regex>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    myStr = regex_replace(myStr, regex("[abc]"), " ");
    stringstream ss(myStr);
    string str;
    
    while(ss >> str){
        answer.emplace_back(str);
    }
    if(answer.empty()){
        answer.emplace_back("EMPTY");
    }
    
    return answer;
}