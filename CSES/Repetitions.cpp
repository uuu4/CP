#include <bits/stdc++.h>
using namespace std;

int main(){

    int localmax =1;
    int globalmax=1;
    string dna;
    cin >> dna;

    int length = dna.length();
    for(int i=0;i<length-1;i++){
        if(dna[i]==dna[i+1]){
            localmax++;
            if(localmax > globalmax)
            globalmax=localmax;
        }
        else localmax=1;
        
    }

    cout << globalmax << "\n";

    
    return 0;
}