#include <bits/stdc++.h>
using namespace std;
void solve(){
     int n;
    cin >> n;
    string s;
    cin >> s;
    multiset<int> waters;
    int counter=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            counter++;
        }
        else{
            waters.insert(counter);
            counter=0;
        }
    }
    waters.insert(counter);
    auto it = waters.lower_bound(3);
    if(it != waters.end()){
        cout << "2" << "\n";
        return;
    }
    else{
        int total = std::accumulate(waters.begin(), waters.end(), 0);
        cout << total << "\n";
        return;
    }
}
int main(){
    int q;
    cin >> q;
    while(q--)solve();
   
    return 0;
}