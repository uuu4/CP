#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x;
    cin >> x;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];    }
    sort(a.begin(),a.end());
    int lo=0;
    int hi = a.size()-1;
    int counter=0;
    while(lo<=hi){
        if(a[lo]+a[hi]>x){
            hi--;
            counter++;
        }
        else{
            hi--;
            lo++;
            counter++;
        }
    }
    cout << counter;

    
    return 0;
}