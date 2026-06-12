#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,y;
    cin >> x >> y;
    
    if(x>=y)cout << "0" << "\n";
    else cout << (y-1)/x << "\n";
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
	return 0;

}
