#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int patsize = pat.size();
    
    for(int i = 0; i <= myString.size() - patsize; i++){
        if(myString.substr(i, patsize) == pat){
            answer++;
        }
    }
    
    return answer;
}