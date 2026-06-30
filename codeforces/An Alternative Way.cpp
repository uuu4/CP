#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        vector<long long> a(n), b(n);
        for(auto &x:a) scanf("%lld",&x);
        for(auto &x:b) scanf("%lld",&x);
        
        long long prefix = 0;
        bool ok = true;
        for(int i=0;i<n;i++){
            prefix += (b[i]-a[i]);
            if(prefix < 0) ok = false;
        }
        printf(ok ? "YES\n" : "NO\n");
    }
}