#include <iostream>
#include <cmath>
using namespace std;


int main(){
    float n,x,y,z;
    int t;
    cin >> t;
    int arr[t];
    float scene1=0;
    float scene2=0;
    for(int i=0;i<t;i++){
    cin >> n >> x >> y >> z;

        scene1=0;
        scene2=0;

        scene1=ceil(n/(x+y));
        scene2+=z;
        n-= x*z;
        scene2=ceil(scene2+n/(x+10*y));
        if(scene2>scene1){
            arr[i]= scene1;
        }
        else arr[i]=scene2;
    }
    for(int i=0;i<t;i++){
        cout << arr[i] << endl;
    }
    
 

    return 0;
}