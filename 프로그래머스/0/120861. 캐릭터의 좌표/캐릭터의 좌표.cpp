#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    
    int x = 0;
    int y = 0;
    
    int x_limit = board[0] / 2;
    int y_limit = board[1] / 2;
    
    for(int i = 0; i < keyinput.size(); i++){
        if(keyinput[i] == "up"){
            if(y + 1 <= y_limit){
                y++;
            }
        }
        else if(keyinput[i] == "down"){
            if(y - 1 >= -y_limit){
                y--;
            }
        }
        else if(keyinput[i] == "left"){
            if(x - 1 >= -x_limit){
                x--;
            }
        }
        else if(keyinput[i] == "right"){
            if(x + 1 <= x_limit){
                x++;
            }
        }
        
    }
    answer.push_back(x);
    answer.push_back(y);
    
    return answer;
}