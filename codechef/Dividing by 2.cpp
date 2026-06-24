#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    priority_queue<int> max_heap;
    int min_val = INT_MAX;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        max_heap.push(x);
        min_val = min(min_val, x); 
    }
    
    int counter = 0;
    

    while (max_heap.top() != min_val) {
        int max_val = max_heap.top();
        max_heap.pop();
        
        int new_val = max_val / 2;
        counter++;

        max_heap.push(new_val);
        min_val = min(min_val, new_val);
    }
    
    cout << counter << "\n";
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int q;
    cin >> q;
    while(q--) {
        solve();
    }
    return 0;
}