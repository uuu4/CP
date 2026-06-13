#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
   int a,b;
   cin >> a>> b;

    vector<pair<int, int> > p;
        int x, y;
        cin >> x >> y; 
        p.push_back(make_pair(abs(x),abs(y))); 
    long long cost=0;
    // for(int k=1;k<=x+y;k++){
    //     if(k%2==0){
    //         if(b>=a){
    //             cost+=a;
    //             y--;
    //         }
    //         else{
    //             cost+=b;
    //             x--;
    //         }
    //     }
    //     else{
    //         if(b>=a){
    //             cost+=a;
    //             x--;
    //         }
    //         else{
    //             cost+=b;
    //             y--;
    //         }
    //     }
    //     if(x==0 && y==0) break;
    // }
    // cout << cost;
    long long total_steps = abs(x) + abs(y);

    long long ans = 0;

    // 1. Durum: Toplam adım sayısı ÇİFT ise
    if (total_steps % 2 == 0) {
        // Senaryo 1: Standart zikzak/dümdüz ilerleme (Adımların yarısı A, yarısı B)
        long long cost1 = (total_steps / 2) * (a + b);

        // Senaryo 2: Pariteyi manipüle edip neredeyse tüm adımları A maliyetiyle atmak
        long long cost2 = total_steps * a;

        // Senaryo 3: Pariteyi manipüle edip neredeyse tüm adımları B maliyetiyle atmak
        long long cost3 = total_steps * b;

        // En ucuz maliyeti seçiyoruz
        ans = min(cost1,cost2);
        ans = min(ans,cost3);
    } 
    // 2. Durum: Toplam adım sayısı TEK ise
    else {
        // Senaryo 1: Tam paketlerin yanına kalan son tek adım için ucuz olanı eklemek
        long long cost1 = ((total_steps - 1) / 2) * (a + b) + min(a, b);

        // Senaryo 2: Neredeyse tüm adımları A yapıp, son adımda kural gereği B ödemek
        long long cost2 = (total_steps - 1) * a + b;

        // Senaryo 3: Neredeyse tüm adımları B yapıp, son adımda kural gereği A ödemek
        long long cost3 = (total_steps - 1) * b + a;

        // En ucuz maliyeti seçiyoruz
        ans = min(cost1,cost2);
        ans = min(ans,cost3);
    }

    cout << ans << "\n";

    

    return 0;
}