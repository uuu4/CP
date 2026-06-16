#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int bill=0;
    while(n>0){
        if(n>=100){
            n-=100;
            bill++;
        }
        else if(n>=20){
            n-=20;
            bill++;
        }
        else if(n>=10){
            n-=10;
            bill++;
        }
        else if(n>=5){
            n-=5;
            bill++;
        }
        else{
            n-=1;
            bill++;
        }

    }
    cout << bill;

    return 0;
}