#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    for(int i = 0; i < n - k; i++){

        if(s[i] == '1') {
            s[i] = '0'; 
            if(s[i+k] == '0') s[i+k] = '1';
            else s[i+k] = '0';
        }
    }


    bool all_zeros = (s.find_first_not_of('0') == string::npos);
    if(all_zeros){
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}