#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin >> x >> y;
    
    int coin = x*y;
    cout << coin/100 << endl;
    
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;

}
