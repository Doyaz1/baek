#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> v = {-1};
    
    for(int h : ingredient){
        if(v.back() ==  1 && h == 2){
            v.back() = 12;
        }
        
        else if(v.back() == 12 && h == 3){
            v.back() = 123;
        }
        
        else if(v.back() == 123 && h == 1){
            answer++;
            v.pop_back();
        }
        
        else{
            v.push_back(h);
        }
    }
    
    
    return answer;
}