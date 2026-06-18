#include <bits/stdc++.h>
using namespace std;
void solve(){
    int u,v,a,s;
    cin >> u >> v >> a >> s;
    
    if((v*v)>=((u*u)-2*a*s))cout << "YES" << "\n";
    else cout << "no" << "\n";
}
int main() {
    int q;
    cin >> q;
    while(q--)solve();
    
    return 0;

}
