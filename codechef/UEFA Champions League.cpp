#include <bits/stdc++.h>
using namespace std;

bool sort2(const pair<string, pair<int, int>>& a, const pair<string, pair<int, int>>& b) {
    
    if (a.second.first != b.second.first) {
        return a.second.first > b.second.first; 
    }
    
    if (a.second.second != b.second.second) {
        return a.second.second > b.second.second;
    }
    
    return a.first < b.first;
}

void solve(){
    unordered_map<string, pair<int, int>> table;
    string s;
    for(int i = 0; i < 12; i++){
        getline(cin, s);
        stringstream ss(s);
        string team1, team2, temp;
        int score1, score2;
        ss >> team1 >> score1 >> temp >> score2 >> team2;
        
        if(score1 > score2){
            table[team1].first += 3;
            table[team1].second += score1 - score2;
            table[team2].second += score2 - score1;
        }
        else if(score2 > score1){
            table[team2].first += 3;
            table[team2].second += score2 - score1;
            table[team1].second += score1 - score2;
        }
        else{
            table[team2].first += 1;
            table[team1].first += 1;
        }
    }
    vector<pair<string, pair<int, int>>> sorted_list(table.begin(), table.end());
    sort(sorted_list.begin(), sorted_list.end(), sort2);
    
    for(int i = 0; i < 2; i++){
        cout << sorted_list[i].first << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    if (cin >> q) {
        cin.ignore();  
        while(q--) {
            solve();
        }
    }
    return 0;
}