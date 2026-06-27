#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;

    int wc=0;
    int ec=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='E')ec++;
        else wc++;
    }
    if(ec>wc){
        cout << "East" << "\n";
    }
    else cout << "West" << "\n";

}