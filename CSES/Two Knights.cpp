#include <iostream>

using namespace std;

int main(){
    
    long long k;
    cin >> k;
    long long total =0;
    long long failed=0;
    for(long long i=1;i<=k;i++){
    total = i*i*(i*i-1)/2;
    failed = 4*(i-1)*(i-2);

    
    cout << total-failed<<endl;}
    
    return 0;}