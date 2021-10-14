#include <bits/stdc++.h>
using namespace std;

bool kt(long long n)
{
    if (sqrt(n) * sqrt(n) == n) return true;
    return false;
}

int main()
{
    freopen("rowodd.inp", "r", stdin);
    freopen("rowodd.out", "w", stdout);
    short c = 1;
    long long a[1000000], n, max = 0, min = 1000000007;
    map<long long, long long> f;
    cin >> n;
    for (long i = 0; i < n; i++) {
        cin >> a[i];
        ++f[a[i]];
        if (kt(a[i]) == false || f[a[i]] > 1) {
            c = 0;
            break;
        }
    }
    if (c == 0) cout << c;
    else {
        sort(a, a + n);
        for (long i = 0; i < n; i++) cout << a[i] << "\n";
    }
    return 0;
}
