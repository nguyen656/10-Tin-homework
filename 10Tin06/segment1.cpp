#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("segment1.inp", "r", stdin);
    freopen("segment1.out", "w", stdout);
    long n, a[1000000], d = 1, max = 0;
    cin >> n >> a[0];
    for (long i = 1; i < n; i++) {
        cin >> a[i];
        if (a[i] >= a[i - 1]) {
            ++d;
            if (d > max) max = d;
        }
        else d = 1;
    }
    cout << max;
    return 0;
}
