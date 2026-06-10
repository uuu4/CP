#include <bits/stdc++.h>

#include <cmath>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    int coef = (n % 6 == 0) ? n/6 :n/6+1;
    cout << x * coef << "\n";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;

}