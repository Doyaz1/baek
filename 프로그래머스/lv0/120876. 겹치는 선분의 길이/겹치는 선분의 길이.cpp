#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    vector<int> idx(200);
    
    for(auto& line : lines){
        int start = line[0];
        int end = line[1];
        
        for(int i = start; i < end; i++){
            idx[i + 100]++;
        }
    }
    
    for(int i = 0; i < idx.size(); i++){
        if(idx[i] != 0){
            idx[i];
        }
    }
    
    for(int i = 0; i < idx.size(); i++){
        if(idx[i] >= 2){
            answer++;
        }
    }

    return answer;
}