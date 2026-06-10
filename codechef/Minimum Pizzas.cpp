#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void solve(){
    int n,x;
    cin>> n >> x;
    
    if(n*x%4==0){
        cout << n*x/4 << endl;
    }
    else cout << n*x/4 + 1 << endl;
}
    

int main() {
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    
    
    return 0;
}
