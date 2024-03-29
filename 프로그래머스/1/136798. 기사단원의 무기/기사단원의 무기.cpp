#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for(int num = 1; num <= number; num++){
        int count = 0;
        
        for(int i = 1; (i * i) <= num; i++){
            if(num % i == 0){
                int share = (int)(num / i);
                
                if((share * share) == num){
                    count += 1;
                }
                else{
                    count += 2;
                }
                
            }
        }
        
        if(count > limit){
            answer += power;
        }
        
        else{
            answer += count;
        }
    }
    
    
    return answer;
}