#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;            
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    
    if(k >= 2){
        cout << "YES\n";       
        return;
    }

    bool sorted = true;
    for(int i=0;i<n-1;i++)
        if(a[i] > a[i+1]) sorted = false;
    
    cout << (sorted ? "YES" : "NO") << "\n";
}
int main(){
    int q;
    cin >> q;
    while(q--)solve();
}
