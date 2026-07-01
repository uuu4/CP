#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x;
    cin >> x;
    vector<pair <int,int> > a(n);
    for(int i=0;i<n;i++){cin >> a[i].first;
    a[i].second=i;}
    sort(a.begin(),a.end());
    int l=0;
    int r=n-1;
    bool flag=false;
    while(l<r){
        if(a[r].first+a[l].first>x){
            r--;
        }
        else if(a[r].first+a[l].first<x){
            l++;
        }
        else{
            cout << a[r].second+1 << " " << a[l].second+1;
            flag=true;
            break;
        }
    }
    if(!flag)cout << "IMPOSSIBLE" << "\n";

    return 0;
}