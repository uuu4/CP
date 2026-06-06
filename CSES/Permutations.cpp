#include <bits/stdc++.h>
using namespace std;



void tek1(long n);
void tek2(long n);
void cif1(long n);
void cif2(long n);
int main(){

    long n;
    cin>>n;

    if(n==4){
        cout << "2 4 1 3";
        return 0; 
    }
    else if(n==1){
        cout << "1";
        return 0;
    }
    if(n<=4){
        cout << "NO SOLUTION";
        return 0;
    }


    
    else{
            if(n%2==0){
               cif1(n);
               cif2(n);
            }
            else{
                tek1(n);
                tek2(n);
            }
    }

    return 0;
}


void cif1(long n){
    if(n%2==0){
        for(int i=1;i<n;i+=2){
            cout << i << " ";
        }
    }
}

void cif2(long n){
    if(n%2==0){
        for(int i=2;i<=n;i+=2){
            cout << i << " ";
        }
    }
}
void tek1(long n){
    if(n%2!=0){
        for(int i=1;i<=n;i+=2){
            cout << i << " ";
        }
    }
}

void tek2(long val){
    if(val%2!=0){
        for(int i=2;i<=val;i+=2){
            cout << i << " ";
        }
    }
}