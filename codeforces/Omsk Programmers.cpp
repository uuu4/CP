#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void solve() {
    long long a, b, x;
    cin >> a >> b >> x;


    long long best = abs(b - a);

    long long tempA = a;
    long long costA = 0;


    while (true) {
        long long tempB = b;
        long long costB = 0;
        while (true) {

            long long currentCost = costA + costB + abs(tempA - tempB);
            
            best = min(best, currentCost);

            if (tempB == 0) break; 
            tempB /= x;
            costB++;
        }

        if (tempA == 0) break; 
        tempA /= x;
        costA++;
    }

    cout << best << "\n";
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}