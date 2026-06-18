#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int sum =n*(n+1)/2;
    if(sum%2==0){
        cout << n << "\n";
    }
    else cout << n-1 << "\n";
}
int main() {
    int q;
    cin >> q;
    while(q--)solve();
    
	return 0;

}
