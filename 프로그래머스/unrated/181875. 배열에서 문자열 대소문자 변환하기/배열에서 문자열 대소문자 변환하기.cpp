#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer = strArr;
    
    for(int i = 0; i < answer.size(); i++){
        if(i % 2 == 0){
            for(int j = 0; j < answer[i].size(); j++){
                answer[i][j] = tolower(answer[i][j]);
            }
        }
        else{
            for(int j = 0; j < answer[i].size(); j++){
                answer[i][j] = toupper(answer[i][j]);
            }
        }
    }
    return answer;
}