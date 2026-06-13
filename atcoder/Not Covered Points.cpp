#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
   int n;
   cin >> n;

    vector<pair<int, int> > p;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y; 
        p.push_back(make_pair(x,y)); 
    }
    

    sort(p.begin(), p.end());
    int localMin=p[0].second;
    int counter=1;
    for(int i=0;i<n;i++){
        if(p[i].second<localMin){
        localMin = p[i].second;
        counter++;}
    }
    cout << counter;

    return 0;
}