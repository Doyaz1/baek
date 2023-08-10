#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    int a = 0;
    int b = 0;
    
    for(int i = 0; i < order.size(); i++){
        if(order[i] == "iceamericano" || order[i] == "americanoice"){
            a++;
        }
        else if(order[i] == "hotamericano" || order[i] == "americanohot"){
            a++;
        }
        else if(order[i] == "icecafelatte" || order[i] == "cafelatteice"){
            b++;
        }
        else if(order[i] == "hotcafelatte" || order[i] == "cafelattehot"){
            b++;
        }
        else if(order[i] == "americano"){
            a++;
        }
        else if(order[i] == "cafelatte"){
            b++;
        }
        else if(order[i] == "anything"){
            a++;
        }
    }
    answer = (4500 * a) + (5000 * b);
    
    return answer;
}
// 틀린 이유 : ice = 4500, hot = 5000이 아니라 라떼만 5000원인 것을 알면 쉽게 풀 수 있다.
// 문제 제대로 읽기