#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    set<int> s;
    for(int i=0;i<n;i++){ cin >> a[i]; s.insert(a[i]); }
    
    int best = 0;
    for(int start : s){         
        int mex = 0;
        while(s.count(start + mex)) mex++;  
        best = max(best, mex);
    }
    cout << best << "\n";
}
int main(){
    int q;
    cin >> q;
    while(q--)solve();
    return 0;
}