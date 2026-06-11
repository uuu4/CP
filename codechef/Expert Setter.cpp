#include <bits/stdc++.h>
using namespace std;

void solve(){
    float x,y;
    cin >> x >> y;
    
    if(float(x/2)>y){
        cout << "NO" << "\n";
    }
    else {cout << "YES" << "\n"; }
	
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
  
    return 0;
}
