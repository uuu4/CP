#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> x[i];
        sum+=x[i];
    }
    sort(x.begin(),x.end());
    double avg = double(sum/n);
    if(abs(avg-x[0])>=abs(avg-x[n-1])){
        cout << abs(avg-x[0]);
    }
    else {
        cout << abs(avg-x[n-1]);
    }




    return 0;
}