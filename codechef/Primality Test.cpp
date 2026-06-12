#include <bits/stdc++.h>
using namespace std;
void solve(){ int n;
    cin >> n;
    if(n==1){
        cout << "NO" << "\n";
        return;
    }
    int isPrime=1;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime) cout << "yes" << "\n";
    else cout << "no" << "\n";}


int main() {
    int t;
    cin >> t;
    while(t--)solve();
   
	return 0;

}
