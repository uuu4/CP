#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    int counter=0;
    while(x>0){
        if(x>=5){
            counter++;
            x-=5;
        }
        else if(x>=4){
            counter++;
            x-=4;
        }
        else if(x>=3){
            counter++;
            x-=3;   
        }
        else if(x>=2){
            counter++;
            x-=2;
        }
        else if(x>=1){
            x-=1;
            counter++;
        }
    }
    cout << counter;

    return 0;
}