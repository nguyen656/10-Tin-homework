#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("TRUONGSA.inp", "r", stdin);
    freopen("TRUONGSA.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n, x, t = 0, lmax = 0;
    cin >> n;
    long l[n];
    std::vector<long> a;
    for (long i = 1; i <= n; i++) {
        cin >> x;
        if (x % 2 == 1 && x != t) {
            a.push_back(x);
            t = x;
        }
    }
    n = a.size();
    for (int i = 0; i < n; i++) {
        l[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) l[i] = max(l[i], l[j] + 1);
        }
    }
    for (int i = 0; i < n; i++) {
        lmax = max(lmax, l[i]);
    }
    cout << lmax;
    return 0;
}
