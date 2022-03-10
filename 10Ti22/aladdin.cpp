#include <bits/stdc++.h>
using namespace std;

void fileIO()
{
    freopen("aladdin.inp", "r", stdin);
    freopen("aladdin.out", "w", stdout);
}

int main()
{
    fileIO();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n, lmax = 0, d;
    cin >> n >> d;
    long a[n], l[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        l[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[i] - a[j] == d) l[i] = max(l[i], l[j] + 1);
        }
    }
    for (int i = 0; i < n; i++) {
        lmax = max(lmax, l[i]);
    }
    cout << lmax;
    return 0;
}
