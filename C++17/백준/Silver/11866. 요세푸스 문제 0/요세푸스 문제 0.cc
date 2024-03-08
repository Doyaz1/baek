#include <iostream>
#include <queue>

using namespace std;

int a, b;
queue<int>q;

int main(){
    int i;
    
    cin >> a >> b;
    
    for(i = 1; i <= a; i++){
        q.push(i);
    }
    
    cout << "<";
    
    while(q.size() != 0){
        for(i = 1; i < b; i++){
            q.push(q.front());
            q.pop();
        }
        
        cout << q.front();
        
        if(q.size() != 1){
            cout <<", ";
        }
        q.pop();
    }
    
    cout << ">";
    
    return 0;
}