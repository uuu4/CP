#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int totalfives=0;
    while(n>0){
        totalfives= totalfives + n/5;
        n= n/5;
    }
    cout << totalfives;
    return 0;
    }