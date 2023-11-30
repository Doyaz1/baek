#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int num = s.size();
    int i, j;
    
    for(i = 0; i < num; i++){
        int c = 0;
        int e = 0;
        int x = s[i];
        
        for(j = i; j < num; j++){
            if(s[j] == x){
                c++;
            }
            else{
                e++;
            }
            if(c == e){
                break;
            }
        }
        i = j;
        answer++;
    }
    
    
    return answer;
}