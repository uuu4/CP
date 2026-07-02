#include <bits/stdc++.h>
using namespace std;

void solve(){
      int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>> a[i];
    long long sum=0;
    long long minn=2e9;
    for(int i=1;i<=n;i++){
        sum+=a[i-1];
        long long current_avg = sum/i;
        minn = min(minn,current_avg);
        cout << minn << " ";
    }
    cout << "\n";

}
using namespace std;
int main(){
    int q;
    cin>> q;
    while(q--)solve();
    return 0;
}