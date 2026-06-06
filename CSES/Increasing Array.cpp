#include <bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin >> n;
    long long moves=0;

    long long arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    

    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
           moves+= arr[i]-arr[i+1];
           arr[i+1]=arr[i]; 
        }
    }
    if(arr[n-2]>=arr[n-1]){
        moves+=arr[n-2]-arr[n-1];
        arr[n-1]=arr[n-2];
    }
    if(n==1){
        moves=0;
    }
    cout << moves<<"\n";
    return 0;
}