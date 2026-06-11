#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
	cin >> n >> x;
	if (x>=n){
	    cout << "0" << "\n";
	    return;
	}
	
	int rem= n-x;
	cout << (rem+3)/4 << "\n";
}
int main() {
	int t;
	cin >> t;
	while(t--)solve();
    return 0;
}
