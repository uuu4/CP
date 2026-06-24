#include <bits/stdc++.h>
using namespace std;
void solve(){
     int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin >> a[i];
    int counter=1;
    int mx=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1])
        {
            counter++;
        }
        else{
            counter=1;
        }
        mx=max(mx,counter);
    }
    if(mx<m)cout << "YES" << "\n";
    else cout << "NO" << "\n";
}
int main(){
    int q;
    cin >> q;
    while(q--)solve();
   
    return 0;
}