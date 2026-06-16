#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long c[n];
    long long sum=0;  
    for(int i=0;i<n;i++){
        cin >> c[i];
        sum+=c[i];
    }
    vector<long long> subset;
    subset.clear();
    long long int min=2e10;  
    for(size_t mask=0;mask<(1<<n);mask++){
        subset.clear();
        long long int s_sum=0;
        for(int i=0;i<n;i++){
            if(mask & (1<<i)){
            subset.push_back(c[i]);
                    }
                }
        for(size_t i=0;i<subset.size();i++){
            s_sum+=subset[i];
                }
        min = std::min(abs(s_sum - (sum - s_sum)),min);
        }
    cout << min;
    return 0;
        }