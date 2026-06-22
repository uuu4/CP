#include <bits/stdc++.h>
using namespace std;

int greedy(int gap,vector<pair <int,int> > &cloth,int n){
    int r=cloth[0].first;
    int counter=1;
    for(int i=1;i<n;i++){
        if(cloth[i].second-r>=gap){
            counter++;
            r=cloth[i].first;
        }
    }
    return counter;
}

int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<pair <int,int> > cloth(n);
    for(int i=0;i<n;i++){
        cin >> cloth[i].second >> cloth[i].first; 
        // second -> left ; first -> right 
    }
    sort(cloth.begin(),cloth.end());
    int low = 0;
    int high= 2e9;

    while (low<high){
        int mid = low + (high - low + 1) / 2;
        if(greedy(mid,cloth,n)>=k){
            low =mid;
        }
        else{
            high = mid-1;
        }
    }
    if(low==0){
        cout << -1;
        return 0;
    }
    cout << low;
    return 0;

}