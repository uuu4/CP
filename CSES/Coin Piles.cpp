#include <iostream>
#include <vector>

using namespace std;


int main(){

    int t;
    cin >> t;
    long long a,b;

    vector<long long> arr1;
    vector<long long> arr2;
    for(int i=0;i<t;i++){
        cin >> a >> b;


        arr1.push_back(a);
        arr2.push_back(b);

    }

    for(int i = 0; i < t; i++){
        long long a = arr1[i], b = arr2[i];
        if((a+b) % 3 == 0 && 2*a >= b && 2*b >= a){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }



    return 0;
}