#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,s;
    cin >> n >> s;


    int max=n;
    int min= s-n;
    
    if(s>=n)
    cout << max-min << "\n";
    
    else cout << s << "\n";
}
int main() {
    int t;
    cin >> t;
    while(t--)solve();
    
	return 0;

}
