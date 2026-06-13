#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main(){
    const int M=1000000 + 1;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ll D;
    if(!(cin >> n >> D)) return 0;
    vector<ll> d(M,0);

    for(int i=0;i<n;i++){
        ll S,T;
        cin >> S >> T;
        if(T-S>=D){
            d[S]+=1;
            d[T - D + 1] -= 1;
        }
    }
    ll c=0;
    ll ans=0;
    for(int i=0;i<M;i++){
        c+=d[i];
        ans+=c*(c-1)/2;
    }
    cout << ans;



    return 0;
}