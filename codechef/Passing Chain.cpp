#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, k; 
    cin >> n >> k;
    
    
    long long ans = 1 + ((n - 1) / k) * k;
    
    cout << ans << "\n";
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int q;
    cin >> q;
    while(q--) {
        solve();
    }
    return 0;
}