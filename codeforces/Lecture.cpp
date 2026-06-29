#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    cin.ignore();
    unordered_map<string,string> t;
    string s;

    
    for(int i=0;i<m;i++){
        getline(cin, s);
        stringstream ss(s);
        string lec,note;
        ss >> lec >> note;
        if(lec.size()>note.size()){
            t[lec]=note;
        }
        else{
            t[lec]=lec;
        }
    }
    vector<string> ans(n);
    getline(cin,s);
    stringstream ss(s);
    for(int i=0;i<n;i++){
        ss >> ans[i];
    }
    for(int i=0;i<n;i++){
       cout << t[ans[i]]<<" ";
    }


    return 0;
}