#include <bits/stdc++.h>
using namespace std;


int main(){
    int k,n,w;
    cin >> k >> n >> w;

    int money = n-k*(w*(w+1))/2;
    if(money >= 0){
        cout << 0;
    }
    else{
        cout << abs(money);
    }



    return 0;
}