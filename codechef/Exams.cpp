#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,y,z;
    
    cin >> x >> y >> z;
    
    if(2*z>x*y){
        cout << "YES" << "\n";
    }
    else cout << "NO" << "\n";
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;

}
