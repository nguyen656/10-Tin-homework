#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("SEQ123.inp", "r", stdin);
    freopen("SEQ123.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n, lmax = 0;
    cin >> n;
    long a[n], l[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
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
