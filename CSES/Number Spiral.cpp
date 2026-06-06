#include <iostream>
#include <algorithm>
#include <vector> // std::max için

using namespace std;


int main() {
    long t;
    cin >> t;
    long arr[t][2];
    for(int i=0;i<t;i++){
        for(int j = 0; j < 2; j++) {
        cin >> arr[i][j];
    }}
    
    for(int i=0;i<t;i++){
    long max_val = std::max(arr[i][0], arr[i][1]);
    long ref = max_val*max_val-(max_val-1);
    if(max_val%2==0){
            ref+=arr[i][0]-arr[i][1];
    }
    else{
        ref+=arr[i][1]-arr[i][0];
    }
    cout << ref<< "\n";

}
return 0;
}