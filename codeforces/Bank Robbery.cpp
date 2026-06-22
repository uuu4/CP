#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int n;
    cin >> n;
    vector<int> x(n);
    int counter=0;
    for(int i=0;i<n;i++){
        cin >> x[i];
        if(x[i]>=b+1 && c-1>=x[i]){
            counter++;
        }
    }
    cout << counter;
    




    return 0;
}