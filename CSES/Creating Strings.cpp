#include <bits/stdc++.h>
using namespace std;
long long factorial(long long n){
    if(n<=1) return 1;
    return factorial(n-1)*n;
}
int main(){
    string s;
    cin >> s;
    long long length = s.size();
    

    vector<long long> arr(26, 0);
    for(long long i = 0; i < length; i++){
        arr[s[i] - 'a']++;
    }
    long long div=1;
    for(long long i=0;i<26;i++){
        if(arr[i]>1){
            div*=factorial(arr[i]);
        }
    }
    long long comb = factorial(s.size())/div;
    cout << comb << "\n";
    sort(s.begin(), s.end());
    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));







    return 0;
}