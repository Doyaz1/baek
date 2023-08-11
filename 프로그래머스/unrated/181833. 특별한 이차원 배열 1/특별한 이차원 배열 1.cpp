#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> arr(n, vector<int>(n, 0));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                arr[i][j] = 1;
            }
            else{
                arr[i][j] = 0;
            }
        }
    }
    
    return arr;
}
