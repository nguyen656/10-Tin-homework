#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("primeali.inp", "r", stdin);
    freopen("primeali.out", "w", stdout);
    unsigned long long n, d = 0;
    cin >> n;
    map<long, long> m;
    for (long i = 2; i <= n; i++) {
        while (n % i == 0) {
            m[i]++;
            n /= i;
        }
    }
    for (auto it : m) ++d; 
    cout << d;
    return 0;
}
