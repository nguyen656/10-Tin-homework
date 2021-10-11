#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("countang.inp", "r", stdin);
    freopen("countang.out", "w", stdout);
    long long n;
    cin >> n;
    cout << n * (n - 1) * (n - 2) / 6;
    return 0;
}
