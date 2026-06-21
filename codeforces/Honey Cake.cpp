#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long w, h, d, n;
    if (!(cin >> w >> h >> d >> n)) return 0;


    if (n == 0) {
        cout << -1 << "\n"; 
        return 0;
    }


    vector<long long> divisors;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i * i != n) {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    bool flag = false;
    int sz = divisors.size();

    for (int x = 0; x < sz; x++) {
        long long i = divisors[x];
        if (i > w) break; 
        if (w % i != 0) continue; 

        for (int y = 0; y < sz; y++) {
            long long j = divisors[y];
            if (j > h) break; 
            if (h % j != 0) continue; 
            if (n / i < j) continue; 

            long long ij = i * j;
            if (ij == 0 || n % ij != 0) continue;
            
            long long k = n / ij;

            if (k <= d && d % k == 0) {
                cout << i - 1 << " " << j - 1 << " " << k - 1 << "\n";
                flag = true;
                break;
            }
        }
        if (flag) break;
    }

    if (!flag) {
        cout << -1 << "\n";
    }

    return 0;
}