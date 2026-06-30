#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int v = abs(a[0]);
        int less_count = 0;
        for(int i = 1; i < n; i++){
            if(abs(a[i]) < v) less_count++;
        }
        int greater_count = n - 1 - less_count;
        int m = (n + 1) / 2; 

        bool ok = (less_count <= m - 1) || (greater_count >= m - 1);
        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}