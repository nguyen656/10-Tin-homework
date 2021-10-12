#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    freopen("veryhard.inp", "r", stdin);
    freopen("veryhard.out", "w", stdout);
    short q;
    cin >> q;
    while (q--) {
        long long n, p = 1;
        cin >> n;
        map<long, long> m;
        for (long i = 2; i <= n; i++) {
            while (n % i == 0) {
                m[i]++;
                n /= i;
            } 
        }
        for (auto it : m) p *= it.second + 1;
        cout << p % 2 << " ";
    }
    return 0;
}
