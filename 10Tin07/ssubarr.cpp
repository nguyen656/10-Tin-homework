/*
* Copyright (C) 2021 NguyenTrader. All rights reserved.
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
typedef map<long, long> mll;
typedef vector<long> vl;

#define FU(i, a, b) for (long i = a; i <= b; i++)
#define FD(i, a, b) for (long i = a; i >= b; i--)
#define FE(i, a) for(auto i: a)
#define TC(t) while (t--)
#define RESET(a, b) memset(a, b, sizeof(a))
#define endl "\n"

int main()
{
    freopen("ssubarr.inp", "r", stdin);
    freopen("ssubarr.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    long q, d = 0;
    mll m;
    cin >> q;
    TC(q) {
        long n;
        cin >> n;
        ++m[n];
        ++d;
    }
    FE (it, m) 
        if (it.second > 1) d += it.second * (it.second - 1) / 2;
    cout << d;
	return 0;
}

