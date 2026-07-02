#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> ops; 
    int flips = 0; 
    for(int i = n - 1; i >= 0; i--) {
        long long current_val = a[i];
        if(flips % 2 == 1) {
            current_val = -current_val;
        }
        if(current_val > 0) {
            ops.push_back(i + 1); 
            flips++;
        }
    }
    cout << ops.size() << "\n";
    for(int i = 0; i < ops.size(); i++) {
        cout << ops[i] << " ";
    }
    cout << "\n";
}

int main() {
    // Giriş-Çıkış hızlandırma (TLE almamak için şart)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}