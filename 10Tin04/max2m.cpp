#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("max2m.inp", "r", stdin);
    freopen("max2m.out", "w", stdout);
    long n, a[100000];
    cin >> n;
    for (long i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    cout << max(a[0] * a[1], a[n - 1] * a[n - 2]);
    return 0;
}
