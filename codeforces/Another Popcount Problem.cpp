#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        

        long long ans = min(n, k);
        

        for(int m = 20; m >= 1; m--) {
            long long v = (1LL << m) - 1;
            if(v * k <= n) {
                ans = max(ans, (long long)m * k);
                break;
            }
        }
        
        cout << ans << "\n";
    }
    return 0;
}