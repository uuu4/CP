#include <bits/stdc++.h>
using namespace std;
long long lcm_three(long long a, long long b, long long c) {
    return std::lcm(a, std::lcm(b, c));
}
void solve(){
    long long a,b,c,m;
    cin >> a >> b >> c>> m;

    long long abc=(m/lcm_three(a,b,c));
    long long bc=(m/lcm(b,c))-abc;
    long long ac=(m/lcm(a,c))-abc;
    long long ab=(m/lcm(a,b)-abc);
    long long sA=(m/a)-ab-abc-ac;
    long long sB=(m/b)-ab-abc-bc;
    long long sC=(m/c)-bc-abc-ac;

    cout << sA*6+ac*3+ab*3+abc*2 << " " << sB*6+ab*3+bc*3+abc*2 << " " << sC*6+ac*3+bc*3+abc*2 << "\n";
}
int main(){
    int q;
    cin >> q;
    while(q--)solve();
    

    
    return 0;
}