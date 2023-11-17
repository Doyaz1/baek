#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string l_str = "";
    string r_str = "";
    
    for(unsigned int i = 1; i < food.size(); i++){
        int count = food[i] / 2;
        
        if(count > 0){
            for(int k = 0; k < count; k++){
                l_str = l_str + to_string(i);
                r_str = to_string(i) + r_str;
            }
        }
    }
    
    answer = l_str + "0" + r_str;
    
    return answer;
}