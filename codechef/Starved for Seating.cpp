#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);
    long long total = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        total += a[i];
    }

    long long threshold = k - total/2;

    vector<long long> b(n);
    for(int i=0;i<n;i++) b[i] = a[i]/2;

    sort(b.begin(), b.end());

    long long count = 0;
    int l = 0, r = n-1;
    while(l < r){
        if(b[l] + b[r] > threshold){
            count += (r - l);
            r--;
        } else {
            l++;
        }
    }

    cout << count << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}