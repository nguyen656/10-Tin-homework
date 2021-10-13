#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("primenum.inp", "r", stdin);
    freopen("primenum.out", "w", stdout)
    long x, y, d = 0;
    cin >> x >> y;
    vector<bool> isPrime(y - x + 1, true);
    for (long long i = 2; i * i <= y; ++i) {
        for (long long j = max(i * i, (x + i - 1) / i * i); j <= y; j += i) {
            isPrime[j - x] = false;
        }
    }
    if (1 >= x) isPrime[1 - x] = false;
    for (long long i = x; i <= y; ++i) 
        if (isPrime[i - x]) ++d; 
    cout << d;
    return 0;
}
