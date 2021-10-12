#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("number0.inp", "r", stdin);
    freopen("number0.out", "w", stdout);
    long long n, d = 0;
    cin >> n;
    while (n >= 5) {
        n /= 5;
        d += n;
    }
    cout << d;
    return 0;
}
