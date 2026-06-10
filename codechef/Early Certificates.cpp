#include <bits/stdc++.h>
using namespace std;


void solve(){
     int n,m;
    cin >> n >> m;
    string a,b;
    cin >> a;
    cin >> b;
    int localMin=min(n,m);

        for(int j=0;j<localMin;j++){
            if(a[j]==b[j]){
                cout << a[j];
            }
            else break;
        }
        cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t>0){
        solve();
        t--;
    } 
	return 0;
}
