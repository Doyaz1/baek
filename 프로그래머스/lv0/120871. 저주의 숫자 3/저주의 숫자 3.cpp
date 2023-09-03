#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int count = 1, m = 1;
    
    while(1){
        bool check = false;
        string s = to_string(m);
        
        if(m % 3 == 0){
            m += 1;
            continue;;
        }
        
        else{
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '3'){
                    m += 1;
                    check = true;
                    break;
                }
            }
        }
        
        if(check){
            continue;
        }
        
        else if(count == n){
            break;
        }
        
        count++;
        m++;
    }
    return m;
}