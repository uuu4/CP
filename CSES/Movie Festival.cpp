#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair <int,int> > movies(n);
    for(int i=0;i<n;i++){
        cin >> movies[i].second >> movies[i].first;
        }
    sort(movies.begin(),movies.end());
    int cnt=0;
    int lastEnd=-1;
    for(int i=0;i<n;i++){
        int start = movies[i].second;
        int end = movies[i].first;
        if(start>=lastEnd){
            cnt++;
            lastEnd=end;
        }
    }
    cout << cnt;

    return 0;
}