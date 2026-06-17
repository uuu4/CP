#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n,x,p;
    cin >> n >> x >> p;
    
    int incorrect = n-x;
    if(3*x-incorrect>=p)cout << "PASS" << "\n";
    else cout << "FAIL" << "\n"; 
}
int main() {
    int t;cin >> t;
    while(t--)solve();
	return 0;

}
