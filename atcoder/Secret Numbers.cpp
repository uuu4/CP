#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<= 57)
        cout << s[i];
    }
    return 0;
}