#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair <int,int> > arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i].second >> arr[i].first; // first height, then time;
    }
    sort(arr.begin(), arr.end());
    vector<int> suf_max(n);
    suf_max[n-1]=arr[n-1].second;

    for(int i = n - 2; i >= 0; i--) {
        suf_max[i] = max(suf_max[i+1], arr[i].second);
    }
    int q;
    cin >> q;
    
    while(q--) {
        int qry_time;
        cin >> qry_time;
        auto it = upper_bound(arr.begin(), arr.end(), make_pair(qry_time, (int)2e9));

        if (it != arr.end()) {
            int idx = distance(arr.begin(), it);
            cout << suf_max[idx] << "\n";
        } else {
            cout << -1 << "\n"; 
        }
    }

    return 0;
}
