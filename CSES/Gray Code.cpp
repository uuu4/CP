#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> gray(int n){
    if(n==1){
    vector<string> base;
    base.push_back("0");
    base.push_back("1");
    return base;
}

    vector<string> prev = gray(n-1);
    vector<string> result;

    for(int i=0; i<(int)prev.size(); i++)
        result.push_back("0" + prev[i]);

    for(int i=(int)prev.size()-1; i>=0; i--) 
        result.push_back("1" + prev[i]);

    return result;
}

int main(){
    int n;
    cin >> n;
    vector<string>ans = gray(n);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << "\n";
    }

}