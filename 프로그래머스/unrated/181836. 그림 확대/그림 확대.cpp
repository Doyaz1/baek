#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    
    for(const string& row : picture){
        string enlargedRow;
        
        for(char pixel : row){
            for(int i = 0; i < k; i++){
                enlargedRow += pixel;
            }
        }
        for(int i = 0; i < k; i++){
            answer.push_back(enlargedRow);
        }
    }
    
    return answer;
}