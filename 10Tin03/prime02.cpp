#include <bits/stdc++.h>
using namespace std;

bool prime(long n)
{
    if (n == 2 || n == 3) return true;
    if (n == 1 || n % 2 == 0 || n % 3 == 0) return false;
    long i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
        i += 6;
    }
    return true;
}

int main()
{
    freopen("prime02.inp", "r", stdin);
    freopen("prime02.out", "w", stdout);
    long n;
    while (cin >> n) cout << prime(n) << "\n";
    return 0;
}
