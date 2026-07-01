#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i=0;i<n;i++)cin >> a[i];
    long long best=-1*1e9;
    long long sum=0;
    for(int i=0;i<n;i++){
        sum = max((long long)a[i],sum+a[i]); // sum -1 // sum 3 // sum 1 // sum 6 // sum 9
        best = max(sum,best); // best 0 // best 3 // best 3 // best 6  // best 9
    }
    cout << best << "\n";
    return 0;
}