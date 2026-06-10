#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

void solve(){
    int counter=0;
    long long a,b,c;
    cin >> a >> b >> c;
    if(a==b){
        cout << counter<< endl;
        return;
    }
    while(true){
    if(gcd(a,c)==gcd(b,c)){
        counter++;
        break;}
    else{
        c++;
        counter++;
    }
    
    
}
cout << counter<< endl;
}
int main() {
    int t;
    cin >> t;
    while(t>0){
        solve();
        t--;
    }
    
	return 0;

}
