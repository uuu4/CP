#include <bits/stdc++.h>
using namespace std;
void solve(){int x,y;
	cin >> x >> y;
	
	if(x==y) cout << "SAME" << "\n";
	else if(x>y) cout << "CAR" << "\n";
	else cout << "BIKE" << "\n";}
int main() {
    int t;
    cin >> t;
    while(t--)solve();
	
    return 0;
}
