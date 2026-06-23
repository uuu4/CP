#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    unordered_map<char,int> t;
    for(int i=0;i<s.size();i++){
        t[s[i]]++;
    }
    if(t.size()%2!=0){
        cout << "IGNORE HIM!" << "\n";
    }
    else{
        cout << "CHAT WITH HER!" << "\n";
    }


    return 0;
}