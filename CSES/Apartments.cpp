#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m;
    cin >> n>>m;
    long long k;
    cin >> k;
    vector<long long> a(n);
    vector<long long> b(m);
    for(long long i=0;i<n;i++)cin >> a[i];
    for(long long i=0;i<m;i++)cin >> b[i];
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    long long bp=0;
    long long counter=0;
    long long i=0;
    while(i<n && bp<m){

        int lo = b[bp]-k;
        int hi = b[bp]+k;
        if(a[i]<lo){ 
            i++;
        }
        else if(a[i]>hi){
            bp++;
        }
        else if(a[i]>=lo && a[i]<=hi){
            bp++;
            counter++;
            i++;
        }
    }
    cout << counter;
    return 0;
}