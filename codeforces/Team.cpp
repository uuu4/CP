#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    
    int submission=0;
    while(q--){
    int zero=0;
    int one=0;
    for(int i=0;i<3;i++){
        int x;
        cin >> x;
        if(x==0) zero++;
        else one++;
    }
    if(one>zero)submission++;
}
cout << submission;
    
    return 0;
}