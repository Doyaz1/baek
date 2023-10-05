#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n, 0));
    int num = 1;
    int startX = 0, endX = n - 1;
    int startY = 0, endY = n - 1;
    while (num <= n * n) {
        for(int i = startY; i <= endY; ++i){
            answer[startX][i] = num++;
        }
        startX++;
        for(int i = startX; i <= endX; ++i){
            answer[i][endY] = num++;
        }
        endY--;
        for(int i = endY; i >= startY; --i){
            answer[endX][i] = num++;
        }
        endX--;
        for(int i = endX; i >= startX; --i){
            answer[i][startY] = num++;
        }
        startY++;
    }    
    return answer;
}


/*// 다시 풀어보기

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n, 0));
    int dx[4] = {0, 1, 0, -1}; // 오른쪽, 아래, 왼쪽, 위로 이동하기 위한 방향
    int dy[4] = {1, 0, -1, 0};
    int direction = 0; // 현재 방향 (0 : 오른쪽, 1 : 아래, 2 : 왼쪽, 3 : 위)
    int x = 0, y = 0;
    
    for(int i = 1; i <= n * n; ++i){
        int nx = x + dx[direction], ny = y + dy[direction];
        if(nx < 0 || nx >= n || ny < 0 || ny >= n || answer[nx][ny] != 0){
            direction = (direction + 1) % 4;
            nx = x + dx[direction];
            ny = y + dy[direction];
        }
        x = nx;
        y = ny;
    }
    
    return answer;
}*/