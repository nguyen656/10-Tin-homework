#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("mod.inp", "r", stdin);
    freopen("mod.out", "w", stdout);
    long n, k, p = 1, a;
    cin >> n >> k;
    while (n--) {
        cin >> a;
        p *= a % k;
    }
    cout << p % k;
    return 0;
}
