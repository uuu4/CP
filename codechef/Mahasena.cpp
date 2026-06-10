#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int oddC=0;
    int evenC=0;
     for(int i=0;i<n;i++){
        if(arr[i]%2==0)evenC++;
        else oddC++;
    }
    if(evenC>oddC) cout << "READY FOR BATTLE" << "\n";
    else cout << "NOT READY" << "\n";
    
    
	return 0;

}
