#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin >> x >> y;
    if(x%y==0){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
}
int main(){
    int q;
    cin >> q;
    while(q--)solve();
    
    return 0;
}