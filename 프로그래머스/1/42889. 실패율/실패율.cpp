#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, double> a, pair<int, double> b) {
    return (a.second > b.second);
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    int players = stages.size();
    vector<pair<int, double>> status(N+1, pair<int, double>{0,0.0});
    
    for (int i=0; i<N+1; i++) {
        status[i].first = i+1;
    }
    
    for (auto stage : stages) {
        status[stage-1].second += 1.0;
    }
    
    for (int i=0; i<N; i++) {
        int fail_player = status[i].second;
        status[i].second /= players;
        players -= fail_player;
    }
    
    status.pop_back();
    stable_sort(status.begin(), status.end(), compare);
    
    for (auto stage : status) {
        answer.push_back(stage.first);
    }
    return answer;
}

