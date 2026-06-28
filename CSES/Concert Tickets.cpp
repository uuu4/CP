#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    multiset<int> h;
    vector<int> t(m);
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        h.insert(x);
    }
    for(int i=0;i<m;i++)cin >> t[i];

    for(int i=0;i<m;i++){
        auto it = h.upper_bound(t[i]);
        if(it==h.begin()){
            cout << -1 << "\n";
            continue;
        }
        --it;
        cout << *it << "\n";
        h.erase(it);
    }
    return 0;
}