#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int U=0;
    int D=0;
    int R=0;
    int L=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='U')U++;
        else if(s[i]=='D')D++;
        else if(s[i]=='L')L++;
        else if(s[i]=='R')R++;
    }
    int minLR=min(L,R);
    int minUD=min(U,D);
    cout << minLR*2 + minUD*2;

    return 0;
}