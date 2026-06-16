#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int length = s.size();
    

    vector<int> arr(26, 0);
    for(int i = 0; i < length; i++){
        arr[s[i] - 'A']++;
    }
    
    int odd = 0;
    int odd_index = -1;
    for(int i = 0; i < 26; i++){
        if(arr[i] % 2 != 0){
            odd++;
            odd_index = i; 
        }
    }
    
    if((length % 2 == 0 && odd > 0) || (length % 2 != 0 && odd != 1)){
        cout << "NO SOLUTION\n";
        return 0;
    }
    
    string ans = "";
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < arr[i] / 2; j++){
            ans += static_cast<char>('A' + i);
        }
    }
    
    cout << ans;

    if(odd_index != -1){
        cout << static_cast<char>('A' + odd_index);
    }
    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
    
    return 0;
}