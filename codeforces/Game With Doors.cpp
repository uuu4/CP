#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l, r, L, R;
    cin >> l >> r >> L >> R;


    int commonLeft = max(l, L);
    int commonRight= min(r, R);


    if (commonLeft > commonRight) {
        cout << 1 << "\n"; 
        return;
    }


    int ans = commonRight - commonLeft;



    if (commonLeft > l || commonLeft > L) {
        ans++;
    }



    if (commonRight < r || commonRight < R) {
        ans++;
    }

    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) solve();    

    return 0;
}