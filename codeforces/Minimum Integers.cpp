#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q--){
        long long l, r, d;
        cin >> l >> r >> d;
        if(d < l){
            cout << d << "\n";
        } else {
            long long x = (r / d + 1) * d;
            cout << x << "\n";
        }
    }
    return 0;
}