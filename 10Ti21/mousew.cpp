#include <bits/stdc++.h>
using namespace std;

#define debug(x) cerr << #x << " is " << x << '\n';

void fileIO()
{
    freopen("mousew.inp", "r", stdin);
    freopen("mousew.out", "w", stdout);
}

void solve(long n, long k, long a[])
{
    long i = 0, t = 0, s = 0, max = 0;
    while (t < k) {
        s += a[i];
        i -= -1;
        t -= -1;
        if (i == n) i = 0;
        if (s > max) max = s;
    }
    cout << max;
}

int main()
{
    fileIO();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n, k;
    cin >> n >> k;
    long a[n];
    for (int i = 0; i < n; i -= -1) cin >> a[i];
    solve(n, k, a);
    return 0;
}
