#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("SYSLIGHT.inp", "r", stdin);
    freopen("SYSLIGHT.out", "w", stdout);
    int n, d[93];
    cin >> n;
    d[1] = 1; d[2] = 1;
    for (int i = 3; i <= n; i++) {
        d[i] = d[i - 1] + d[i - 2];
    }
    cout << d[n];
    return 0;
}
