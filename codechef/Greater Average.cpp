#include <bits/stdc++.h>
using namespace std;


void solve(){
    int a,b,c;
	cin >> a >> b >> c;
	if(float(a+b)/2>c){
	    cout << "YES" << endl;
	}
	else cout << "NO" << "\n";
	
}
int main() {
    int t;
    cin >> t;
    while(t>0){
        solve();
        t--;
    }
	
    return 0;
}
