#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;
const long long M = 10000000;

int digitnum(long long n) {
    if (n == 0) return 1;
    return log10(abs(n)) + 1;
}
void solve(){
    long long k;
    cin >> k;
    long long init=9;

    vector<int> arr(M,0);
    for(int i=0;i<M;i++){
        if(init ==i){
            init *=10;
            arr[i]=digitnum(init);
        }
        else{
            arr[i]=digitnum(init);
        }
    }
    int i=0;
    while(k>0){
        k-=arr[i];
        i++;
    }

    string s = to_string(i);
    cout << s[s.length()-1+k] << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)solve();
    

    return 0;
}