#include <bits/stdc++.h>
using namespace std;

bool prime(long n)
{
    if (n == 2 || n == 3) return true;
    if (n <= 1 || n % 2 == 0 || n % 3 == 0) return false;
    long i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
        i += 6;
    }
    return true;
}

int main()
{
    freopen("prime.inp", "r", stdin);
    freopen("prime.out", "w", stdout);
    long q, max = 0, min = 1000000007;
    cin >> q;
    while (q--) {
        long n;
        cin >> n;
        if (prime(n)) {
            if (n > max) max = n;
            if (n < min) min = n;
        }
    }
    cout << min << "\n" << max;
    return 0;
}
