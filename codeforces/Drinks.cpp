#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    double sum=0;
    for(int &x : p) {cin >> x;
    sum+=x;}
    cout << double(sum/n);
    return 0;
}