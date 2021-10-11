#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("neutral.inp", "r", stdin);
    freopen("neutral.out", "w", stdout);
    long long n, m, a, ncn = 0, pcn = 0, ncm = 0, pcm = 0;
    cin >> n >> m;
    while (n--) {
        cin >> a;
        if (a > 0) ++pcn;
        else if (a < 0) ++ncn;
    }
    while (m--) {
        cin >> a;
        if (a > 0) ++pcm;
        else if (a < 0) ++ncm;
    }
    cout << pcn * ncm + pcm * ncn;
    return 0;
}
