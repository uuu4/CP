
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n + 1);                 
    for(int i = 1; i <= n; i++) cin >> a[i];
    
    bool ok = true;
    for(int m = 1; m <= n; m += 2){          
        vector<int> pos, val;
        for(int p = m; p <= n; p *= 2){     
            pos.push_back(p);
            val.push_back(a[p]);
        }
        sort(val.begin(), val.end());       
        if(pos != val){ ok = false; break; }
    }
    cout << (ok ? "YES" : "NO") << "\n";
}

int main(){
    int q;
     cin>> q;
     while(q--)solve();
    return 0;
}