#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    bool flag=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((a[j]%a[i])%2==0){
                cout << a[i] << " " << a[j] << "\n";
                flag=true;
                break;
            }
        }
        if(flag)break;
    }
    if(!flag)cout << "-1" << "\n";
}
int main(){
    int q;
    cin >> q;
    while(q--)solve();



    return 0;
}