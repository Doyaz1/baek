#include <string>
#include <vector>

using namespace std;
/*유클리드 호제법 사용
두 양의 정수 a, b(a > b)에 대하여 a = bq + r(0 <= r  < b)라 하면, a,b의 최대공약수는 b,r의 최대공약수와 같다. 즉, gcd(a, b) = gcd(bm r)
r = 0이라면, a, b의 최대공약수는 b가 된다.*/

int gcd(int a, int b){
    if(a % b == 0){
        return b;
    }
    return gcd(b, a % b);
}

int solution(int a, int b) {
    int answer = 0;
    b /= gcd(b, a);
    
    while(1){
        if(b % 2 == 0){
            b /= 2;
        }
        
        else if(b % 5 == 0){
            b /= 5;
        }
        
        else{
            break;
        }
    }
    
    if(b == 1){
        answer = 1;
    }
    
    else{
        answer = 2;
    }
    
    return answer;
}