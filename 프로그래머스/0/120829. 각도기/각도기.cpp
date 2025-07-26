#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    
    if(angle > 0 && 90 > angle){
        return 1;
    }
    if(angle == 90){
        return 2;
    }
    if(90 < angle && angle < 180){
        return 3;
    }
    if(180 == angle){
        return 4;
    }
}