#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(true){
        n++;
        string str = std::to_string(n);
        if(str[0]!=str[1] && str[1]!=str[2] && str[1]!=str[3] && str[2]!=str[3] && str[0]!=str[3] && str[0]!=str[2]){
            cout << str;
            break;
        }
    }


    return 0;
}