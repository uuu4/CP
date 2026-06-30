#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long x;
    cin >> x;
    int digit = 0;
    while(x > 0){
        digit++;
        x /= 10;
    }
    long long y = 1;
    for(int i = 0; i < digit; i++) y *= 10;   
    y += 1;
    cout << y << "\n";
}
int main(){
    int q;
    cin >> q;
    while(q--) solve();
}