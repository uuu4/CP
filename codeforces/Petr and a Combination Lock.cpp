#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }


    int sum;
    for(int mask=0;mask<(1<<n);mask++){
        sum =0;
        for(int i=0;i<n;i++){
            if(mask & (1<<i)){
                sum+=a[i];
            }
            else sum-=a[i];
        }
         if(sum%360==0) {cout << "YES";
        return 0 ;}
    }
   
    cout << "NO";


    return 0;
}