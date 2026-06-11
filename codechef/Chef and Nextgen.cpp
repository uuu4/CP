#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    
    if (x*y >= a*b){
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
