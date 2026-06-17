#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin >> x >> y;
    
    int sum1=500-2*x-4*x+1000-4*y;
    int sum2=1000-4*y-2*y+500-2*x;
    if(sum1>=sum2) cout << sum1 << "\n";
    else cout << sum2 << "\n";
}
int main() {
    int t;
    cin >> t;
    while(t--)solve();
    
	return 0;

}
