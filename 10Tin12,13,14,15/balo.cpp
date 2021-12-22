#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("BALO.inp", "r", stdin);
    freopen("BALO.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n, max = 0, s;
    cin >> n;
    long a[n + 1], d[n + 1], c[n + 1];
    for (long i = 1; i <= n; i++) cin >> a[i] >> c[i];
    memset(d, 0, sizeof d);
    for (long i = 1; i <= n; i++) {
        s = 0;
        for (long j = 1; j <= i - 1; j++) 
            if (a[j] < a[i] && s < d[j]) s = d[j];
        d[i] = s + c[i];
    }
    for (long i = 1; i <= n; i++) 
        if (max < d[i]) max = d[i];
    cout << max;
    return 0;
}
