#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    
    cin >> n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }
    int realSum = n*(n+1)/2;
    int fakeSum=0;
    for (int i=0;i<n-1;i++){
        fakeSum+=arr[i];
    }
    cout << realSum-fakeSum;
    
    return 0;
}