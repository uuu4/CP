#include <iostream>
#include <string>
using namespace std;

void solve() {
    long long k;
    cin >> k;

    long long digits = 1;   
    long long start  = 1;   
    long long count  = 9;  

    
    while (k > digits * count) {
        k -= digits * count;
        digits++;
        start *= 10;
        count *= 10;
    }

    long long num = start + (k - 1) / digits;

    int pos = (k - 1) % digits;

    cout << to_string(num)[pos] << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}