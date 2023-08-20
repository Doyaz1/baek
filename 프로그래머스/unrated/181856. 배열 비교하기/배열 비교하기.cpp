#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    int sum1 = 0;
    int sum2 = 0;
    
    for(int i = 0; i < arr1.size(); i++){
        sum1 += arr1[i];
    }
    
    for(int j = 0; j < arr2.size(); j++){
        sum2 += arr2[j];
    }

    if(arr1.size() != arr2.size()){
        return arr1.size() > arr2.size() ? 1 : -1;
    }
    
     answer = sum1 > sum2 ? 1 : (sum1 < sum2 ? -1 : 0);
    
    return answer;
}

    
/*#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0;
    int sum1 = 0;
    int sum2 = 0;
    
    if(arr1.size() != arr2.size()){
        if(arr1.size() < arr2.size()){
            answer = -1;
            }
        else if(arr1.size() > arr2.size()){
            answer = 1;
            }
        }
    
    for(int i = 0; i < arr1.size(); i++){
        sum1 += arr1[i];
    }
    
    for(int j = 0; j < arr2.size(); j++){
        sum2 += arr2[j];
    }
    
    if(arr1.size() == arr2.size() || sum1 > sum2){
        answer = 1;
    }
    
    else if(arr1.size() == arr2.size() || sum1 < sum2){
        answer = -1;
    }
    
    else if(arr1.size() == arr2.size() || sum1 == sum2){
        answer = 0;
    }
    
    return answer; 
}*/