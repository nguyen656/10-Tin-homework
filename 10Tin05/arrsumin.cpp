#include <bits/stdc++.h>
using namespace std;

bool kt(long long n)
{
    if (n < 0) return false;
    long long c = (-2 * n);
    short b = 1, a = 1;
    long long d = (b * b) - (4 * a * c);
    if (d < 0) return false;
    float root1 = (-b + sqrt(d)) / (2 * a);
    float root2 = (-b - sqrt(d)) / (2 * a);
    if (root1 > 0 && floor(root1) == root1) return true;
    if (root2 > 0 && floor(root2) == root2) return true;
    return false;
}

int main()
{
    freopen("arrsumin.inp", "r", stdin);
    freopen("arrsumin.out", "w", stdout);
    short c = 1;
    long long a, n, t, max = 0, min = 1000000007;
    map<long long, long long> f;
    cin >> n;
    for (long i = 1; i <= n; i++) {
        cin >> a;
        ++f[a];
        if (kt(a) == false || f[a] > 1) {
            c = 0;
            t = a;
            break;
        }
        else if (kt(a) && f[a] == 1) {
            if (a > max) max = a;
            if (a < min) min = a;
        }
    }
    if (c == 0) cout << t;
    else {
        cout << min << endl;
        cout << max;
    }
    return 0;
}
