#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if(n/2==1 && n%2==0){
        cout << "YES" << "\n";
    }
    sort(a.begin(),a.end());
    int flag=0;
    int tempN=n;
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]<=k){
            flag=1;
            tempN--;
        }
        else flag =0;

    }
    if(tempN%2==0 && flag==1) cout << "YES" << "\n" ;
    else cout << "NO";


    return 0;
}