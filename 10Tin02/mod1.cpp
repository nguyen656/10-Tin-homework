#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("mod1.inp", "r", stdin);
    freopen("mod1.out", "w", stdout);
    long n, p = 1, k;
    cin >> n >> k;
    for (long i = 1; i <= n; i++) p *= i % k;
    cout << p % k;
    return 0;
}
