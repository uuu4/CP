#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n>>k;
    int counter=0;
    vector<int> cardPicked(n,0);
    for(int i=k;i>0;i--){
         counter=0;
        while(counter<n){
            if(k==0){
                break;
            }
            cardPicked[counter]+=k;
            counter++;
            k--;

        }

         counter=n-1;
        while(counter>=0){
            if(k==0){break;}
            cardPicked[counter]+=k;
            counter--;
            k--;

        }
        if(k==0){
            break;
        }
        
       
    }
     cout << *max_element(cardPicked.begin(), cardPicked.end())<<endl;
}

int main() {
    int t;
    cin >> t;

    while(t>0){
        solve();
        t--;
    }
    
	return 0;

}
