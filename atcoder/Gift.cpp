#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool arr[101][101] = {false};


    int k;
    for(int i=0;i<n;i++){
        cin >> k;
        for(int j=0;j<k;j++){
            int input;
            cin >> input;
            arr[i][input]=true;
        }
    }
    for(int j=1;j<=n;j++){
        int counter=0;
        for(int i=0;i<=n;i++){
            {
                if(arr[i][j]==true)counter++;
            }
        }
        cout << counter << " ";
        for(int i=0;i<n;i++){
            if(arr[i][j]==true)
            cout << i+1 << " ";
        }
        cout << "\n";
    }
    return 0;
}