#include <bits/stdc++.h>
using namespace std;

long long find(long n)
{
    if (n == 1) return 1;
    int m = 0; 
    long long p = 1;
    for (long i = 1; i <= n; i++) {
        p *= i;
        while (p % 2 == 0) {
            m++;
            p /= 2;
        }
        while (p % 5 == 0) {
            m--;
            p /= 5;
        }
        p %= 10;
    }
    switch (m % 4) {
    case 0:
        return (p * 6) % 10;
    case 1:
        return (p * 2) % 10;
    case 2:
        return (p * 4) % 10;
    case 3:
        return (p * 8) % 10;
    }
}
 
int main()
{
    freopen("other.inp", "r", stdin);
    freopen("other.out", "w", stdout);
    long n;
    cin >> n;
    cout << find(n);
    return 0;
}
