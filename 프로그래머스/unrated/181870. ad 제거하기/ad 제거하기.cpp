#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    return [&]{
        vector<string> answer;
        for(const auto& s : strArr){
            if(s.find("ad") == string::npos){
                answer.emplace_back(s);
            }
        }
        return answer;
    }();
}


/* #include <string>
#include <vector>


using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;

    for(int i = 0; i < strArr.size(); i++){
        answer = strArr.erase(remove(strArr.begin(), strArr.end(), "ad"), strArr.end());
    }
    
    return answer;
} */