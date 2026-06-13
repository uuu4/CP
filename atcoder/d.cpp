#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
   
    long long n,d;
    cin >> n >> d;

    vector<pair <long long,long long> > c;
    for(int i=0;i<n;i++){
        int s,t;
        cin >> s >> t;
        c.push_back(make_pair(s,t)); 
    }

    sort(c.begin(), c.end());
    int counter=0;
    for(int i=0;i<n;i++){ 
        for(int j=i+1;j<n;j++){
            if(c[i].second > c[j].first){
                counter++;
            }
            else break;
        }
    }
    cout << (counter/2);

    return 0;
}