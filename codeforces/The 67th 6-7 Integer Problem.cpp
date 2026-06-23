#include <bits/stdc++.h>
using namespace std;
void solve(){
    vector<int> arr(7);
    int sum=0;
    for(int i=0;i<7;i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());
    for(int i=0;i<7;i++){
    if(i!=6)
        sum+=(arr[i]*-1);
        else sum+=arr[i];}
    cout << sum << "\n";
    
}
int main (){   
    int q;
    cin >> q;
    while(q--)solve();
   
    return 0;
}