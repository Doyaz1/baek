#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int x = dots[0][0];
    int y = dots[0][1];
    bool dx = false;
    bool dy = false;
    
    for(int i = 1; i < dots.size(); i++){
        if(x != dots[i][0] && !dx){
            x = abs(x - dots[i][0]);
            dx = true;
        }
        
        else if(y != dots[i][1] && !dy){
            y = abs(y - dots[i][1]);
            dy = true;
        }
    }
    
    answer = x * y;
        
    return answer;
}