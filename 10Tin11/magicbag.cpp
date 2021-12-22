#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("MAGICBAG.inp", "r", stdin);
    freopen("MAGICBAG.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n;
    cin >> n;
    long a[n + 1], d[n + 1];
    for (long i = 1; i <= n; i++) cin >> a[i];
    d[0] = 0;
    d[1] = a[1];
    d[2] = a[2];
    for (long i = 3; i <= n; i++) {
        d[i] = a[i] + max(d[i - 2], d[i - 3]);
    }
    cout << max(d[n], d[n - 1]);
    return 0;
}
