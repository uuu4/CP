#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

void solve(){
    int n;
   cin >> n;
   vector<int> h(n); 

   for(int i=0;i<n;i++){
    cin >> h[i];
   }
   int min = *min_element(h.begin(),h.end());
   int max = *max_element(h.begin(),h.end());
   cout << max-min+1 << "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}