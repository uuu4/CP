#include <bits/stdc++.h>
using namespace std;

void solve(){
    int m, n;
    cin >> m >> n;
    
    if (n <= m) {
        cout << (m - n) << "\n";
    } 
    else {
        if ((n - m) % 2 == 0) {
            cout << 0 << "\n";
        } else {
            cout << 1 << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}