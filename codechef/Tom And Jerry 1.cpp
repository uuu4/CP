#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int k;
    cin >> k;
    
    int moves = abs(d-b)+abs(c-a);
    
    if(k>=moves && (k-moves)%2==0){
        cout <<"YES "<< "\n";
    }
    else{
        cout << "NO" << "\n";
    }
}
int main() {
    int q;
    cin >> q;
    while(q--)solve();
    
	return 0;

}
