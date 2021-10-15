#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("primec.inp", "r", stdin);
    freopen("primec.out", "w", stdout);
    bool isPrime[1000001];
    memset(isPrime, true, sizeof isPrime);
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= 1000001; ++i) {
        if(isPrime[i] == true) {
            for(int j = i * i; j <= 1000001; j += i)
                isPrime[j] = false;
        }
    }
    long q, d = 0;
    cin >> q;
    while (q--) {
        long n;
        cin >> n;
        if (isPrime[n]) ++d;
    }
    cout << d;
    return 0;
}
