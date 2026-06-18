#include <iostream>

using namespace std;

void solve(){
    long long l, r;
    cin >> l >> r;
    long long ans = (2 * r) - (2 * l) + 1;
    
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