#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    if(k==0){
        cout << n << "\n";
    }
    else if(n>=k){
    n=n-(n/k)*k;
    cout << n << "\n";}
    else{
        cout << n << "\n";
    }
    return;
}
int main() {
    int q;
    cin >> q;
    while(q--)solve();
	return 0;

}
