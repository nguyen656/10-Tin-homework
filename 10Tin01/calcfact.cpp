#include <bits/stdc++.h>
using namespace std;

int main()
{
    short n;
    long long p = 1;
    cin >> n;
    for (short i = 1; i <= n; i++) p *= i;
    cout << p;
    return 0;
}
