#include <bits/stdc++.h>
using namespace std;

void solve(){int d,l,r;
    cin >> d >> l >> r;
    
    if(d >= l && d<=r){
        cout << "Take second dose now" << "\n";
    }
    else if (d>r) cout << "Too late" << "\n";
    else cout << "Too Early" << "\n";}
int main() {
    int t;
    cin >> t;
    while(t--){
    solve();}
    
	return 0;

}
