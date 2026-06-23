#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x;
    cin >> x;
    if(x<=66){
        cout << x+1 << "\n";
    }
    else{
        cout << 67 << "\n";
    }
}
int main(){
    int q;
    cin >> q;
    while(q--)solve();
    

    return 0;
}