#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int counter=1;
    vector<int> freq;
    for(int i=1;i<a.size();i++){
        if(a[i]==a[i-1]){
            counter++;
        }
        else{
            freq.push_back(counter);
            counter=1;
        }
    }
    freq.push_back(counter);
    
    sort(freq.begin(),freq.end());
    int i=0;
    while(k>0){
        if(freq[i]!=0){
            k-=freq[i];
            freq[i]=0;}
        else{
            i++;
        }

    }
    int count = std::count_if(std::begin(freq), std::end(freq), [](int x) {
        return x != 0;
    });

    cout << max(1,count) << "\n";
    

}
int main(){
    int q;
    cin >> q;
    while(q--)solve();
    


    return 0;
}