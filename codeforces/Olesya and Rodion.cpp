#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin >> n >> t;
    if(n==1 && t==10){
        cout << -1;
        return 0;
    }
    for(int i=0;i<n;i++){
        if(t==10 && i!=n-1){
            cout << 1;
        }
        else if(t==10 && i==n-1)cout << 0;
        else cout << t;
    }

    
    return 0;
}