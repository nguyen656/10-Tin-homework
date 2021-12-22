#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("GIFTS.inp", "r", stdin);
    freopen("GIFTS.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n;
    cin >> n;
    long a[n + 1], d[n + 1];
    for (long i = 1; i <= n; i++) cin >> a[i];
    d[0] = 0;
    d[1] = a[1];
    d[2] = a[1] + a[2];
    d[3] = max(a[1] + a[2], max(a[2] + a[3], a[1] + a[3]));
    for (long i = 4; i <= n; i++) {
        d[i] = a[i] + max(d[i - 2], a[i - 1] + max(d[i - 3], d[i - 4]));
    }
    cout << max(d[n], max(d[n - 1], d[n - 2]));
    return 0;
}
