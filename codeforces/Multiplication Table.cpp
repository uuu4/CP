#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, x;
    if (!(cin >> n >> x)) return 0;

    long long counter = 0;


    for (long long i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            long long j = x / i;
            

            if (i <= n && j <= n) {
                if (i == j) {
                    counter++;
                } else {
                    counter += 2;
                }
            }
        }
    }

    cout << counter << "\n";
    return 0;
}