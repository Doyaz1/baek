#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    if(sides[0] > sides[1]){
        swap(sides[0], sides[1]);
    }
    
    answer = sides[0] + (sides[0] - 1);
    
    return answer;
}