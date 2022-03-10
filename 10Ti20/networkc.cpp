#include <bits/stdc++.h>
using namespace std;

#define debug(x) cerr << #x << " is " << x << '\n';

void fileIO()
{
    freopen("networkc.inp", "r", stdin);
    freopen("networkc.out", "w", stdout);
}

int main()
{
    fileIO();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n;
    cin >> n;
    long long a[n + 1], f[n + 1] = { 0 };
    for (long i = 1; i <= n; ++i) cin >> a[i];
    f[1] = 0; f[2] = a[1]; f[3] = a[1] + a[2];
    for (long i = 4; i <= n; ++i)
        f[i] = min(f[i - 1] + a[i - 1], f[i - 2] + a[i - 1]);
    cout << f[n];
    return 0;
}
