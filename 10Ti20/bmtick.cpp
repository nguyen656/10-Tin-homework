#include <bits/stdc++.h>
using namespace std;

#define debug(x) cerr << #x << " is " << x << '\n';

void fileIO()
{
    freopen("bmtick.inp", "r", stdin);
    freopen("bmtick.out", "w", stdout);
}

int main()
{
    fileIO();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n;
    cin >> n;
    long long t[n + 1], h[n + 1], f[n + 1] = { 0 };
    for (long i = 1; i <= n; ++i) cin >> t[i];
    for (long i = 1; i < n; ++i) cin >> h[i];
    f[1] = t[1]; f[2] = min(t[1] + t[2], h[1]);
    for (long i = 3; i <= n; ++i)
        f[i] = min(f[i - 1] + t[i], f[i - 2] + h[i - 1]);
    cout << f[n];
    return 0;
}
