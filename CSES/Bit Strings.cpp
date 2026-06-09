#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    const int MOD = 1e9 + 7;

    long long result = 1;
    long long base = 2;
    while(n>0){
        if(n%2==1) result = result *base%MOD;
        base = base*base %MOD;
        n/=2;
    }
    cout << result;

}