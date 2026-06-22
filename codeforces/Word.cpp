#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int sz=s.size();

    int capital=0;
    int anticapital=0;
    for(int i=0;i<sz;i++){
        if(s[i]>=65 && s[i]<=90){
            capital++;
        }
        else anticapital++;
    }
    
    if(capital>anticapital){
        for(int i=0;i<sz;i++){
            if(s[i]>=97 && s[i]<=122){
                s[i]-=32;
            }
        }
    }
    else{
        for(int i=0;i<sz;i++){
            if(s[i]>=65 && s[i]<=90){
                s[i]+=32;
            }
        }
    }
    cout << s;



    return 0;
}