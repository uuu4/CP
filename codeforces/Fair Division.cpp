#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int even=0;
    int odd=0;
    int sum=0;

    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
        if(arr[i]%2==0) even++;
        else odd++;
    }
    if(sum%2!=0){
        cout << "NO" << "\n";
        return;
    } 
    if(odd%2!=0){
        cout << "NO" << "\n";
        return;
    }
    else{
        if(odd==0 && even%2!=0)cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }
}
int main(){
    int q;
    cin >> q;
    while(q--)solve();
    
    return 0;
}