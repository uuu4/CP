#include <bits/stdc++.h>
using namespace std;

int main(){
    string target = "Timur";
    sort(target.begin(), target.end());

    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;

        sort(s.begin(), s.end());
        cout << (s == target ? "YES" : "NO") << "\n";
    }
}