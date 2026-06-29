#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin >> a[i];
    a.insert(a.begin(), 0);
    n++;
    int temp=0;
    int mx=0;
    for(int i=0;i<n-1;i++){
        temp = a[i+1]-a[i];
        mx=max(mx,temp);
    }
    mx=max(mx,(x-a[n-1])*2);
    cout << mx << "\n";

}
int main(){
    
    int q;
    cin >> q;
    while(q--)solve();
    return 0;
}