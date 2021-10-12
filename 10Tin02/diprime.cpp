#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    freopen("diprime.inp", "r", stdin);
    freopen("diprime.out", "w", stdout);
    long n;
    cin >> n;
    map<int, int> m;
    for (long i = 2; i <= n; i++) {
        while(n % i == 0) {
            m[i]++;
            n /= i;
        }
    }
    for (auto it : m) cout << it.first << " "; 
    cout << "\n";
    for (auto it : m) cout << it.second << " ";
    return 0;
}
 
