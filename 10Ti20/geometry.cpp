#include <bits/stdc++.h>
using namespace std;

#define debug(x) cerr << #x << " is " << x << '\n';

void fileIO()
{
    freopen("geometry.inp", "r", stdin);
    freopen("geometry.out", "w", stdout);
}

long long solve(long long a, long long b, long long S)
{
    long long t = 0;
    cin >> a >> b >> S;
    for (int i = 1; i <= S / 2; ++i)
    {
        t = S / i;
        if ((a + i) == (b + t)) return (b + t);
    }
    return -1;
}
 
int main()
{
    fileIO();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b, S;
    cin >> a >> b >> S;
    cout << solve(a, b, S);
    return 0;
}
