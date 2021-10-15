#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("segment2.inp", "r", stdin);
    freopen("segment2.out", "w", stdout);
    long n, a[1000000], s = 0, max = 0;
    cin >> n;
    for (long i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
        if (s > max) max = s;
        if (s < 0) s = 0;
    }
    cout << max;
    return 0;
}
