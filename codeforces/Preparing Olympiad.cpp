#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    long long n,l,r,x;
    cin >> n >> l >> r >> x;

    int c[n];
    for(int i=0;i<n;i++){
        cin >> c[i];    }
    
    int range=0;
    vector<int> subset;
    subset.clear();
    int min=0;
    int max=0;
    int sum=0;
    int counter=0;
    for(int mask=0;mask<(1<<n);mask++){
        subset.clear();
        max=0;
        min =0;
        sum=0;
        for(int i=0;i<n;i++){
            if(mask & (1<<i)){
                subset.push_back(c[i]);
            }
        }
        if(subset.empty()) continue;

        for(int i=0;i<subset.size();i++) sum+= subset[i];
        min = *min_element(subset.begin(),subset.end());
        max = *max_element(subset.begin(),subset.end());
        if(sum >= l  && sum <= r && max-min >= x){
            counter++;
        }

    }
    cout << counter;
    return 0;
}