#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    long long total = (long long)n*(n+1)/2;
    if(total % 2 != 0){
        cout << "NO\n";
        return 0;
    }
    
    long long target = total / 2;
    vector<int> s1, s2;
    

    for(int i = n; i >= 1; i--){
        if(target >= i){
            target -= i;
            s1.push_back(i);
        } else {
            s2.push_back(i);
        }
    }

    cout << "YES" << endl;
    cout << s1.size() << endl;
    for(long unsigned int i=0;i<s1.size();i++){
        cout << s1[i] << " ";
    }
    cout << endl;
    cout << s2.size() << endl;
    for(long unsigned int i=0;i<s2.size();i++){
        cout << s2[i] << " ";
    }
    return 0;}

