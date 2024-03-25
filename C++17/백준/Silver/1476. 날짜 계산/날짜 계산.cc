/* #include <iostream>
 
using namespace std;
 
 
int main(){
    
    int e,s,m;
    int num = 1;
    
    cin >> e >> s >> m;
    
    while(1){
        
        if((num - e) % 15 == 0 && (num - s) % 28 == 0 && (num - m) % 19 == m){
            cout << num << '\n';
            
            break;
        }
        
        else{
            num++;
        }
    }
} 시간초과 */

/* #include <iostream>

using namespace std;

int main(){
    int e, s, m;
    int t_e = 1, t_s = 1, t_m = 1;
    int num = 1;
    
    cin >> e >> s >> m;
    
    while(1){
        if((t_e == e) && (t_s == s) && (t_m == m)){
            cout << num << endl;
            
            break;
        }
        
        else{
            if(t_e == 16){
                t_e = t_e - 15;
            }
            else if(t_s == 29){
                t_s = t_s - 28;
            }
            
            else if(t_s == 20){
                t_s = t_s - 19;
            }
            t_e++; 
            t_s++; 
            t_m++; 
            num++;
        }
    }
} */

#include<iostream>

using namespace std;

int main(){
    int e,s,m;
    int count = 0;;
    int re=0,rs=0,rm=0;
    cin >> e >> s >> m;
    while(1){
        if(re == 16){
            re = 1;
        }
        if(rs == 29){
            rs = 1;
        }
        if(rm == 20){
            rm = 1;
        }
        if(re == e & rs == s & rm == m){
            cout << count;
            break;

        }
        re++;
        rs++;
        rm++;
        count++;
    }
    
}

