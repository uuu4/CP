#include <bits/stdc++.h>
using namespace std;

void solve(){
    int m, n;
    cin >> m >> n;
    
    if (n <= m) {
        // Puan az olduğu için n tane beraberlik alırız, kalanlar mağlubiyet olur.
        cout << (m - n) << "\n";
    } 
    else {
        // Puan m'den büyükse, hedef mağlubiyeti 0 yapmaktır.
        // Ama n ve m'nin farkı tek sayı ise tam puanı tutturmak için 1 maç feda edilir.
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