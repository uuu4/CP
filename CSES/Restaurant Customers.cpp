#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    for(long long i=0;i<n;i++){
        cin >> a[i];
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    long long i =0;
    long long j=0;
    long long cnt=0 , mx=0;
    while(i<n){
        if(a[i]<b[j]){
            cnt++;
            i++;
        }
        else{
            cnt--;
            j++;
        }
        mx=max(mx,cnt);
    }   
    cout << mx;
    



    return 0;
}