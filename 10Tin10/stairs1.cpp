#include <bits/stdc++.h>
using namespace std;

string add(string a, string b)
{
    string res= "";
    while (a.length() < b.length()) a = "0" + a;
    while (b.length() < a.length()) b = "0" + b;
    int carry = 0;
    for (int i = a.length() - 1; i >= 0; i--)
    {
        int tmp = a[i] - 48 + b[i] - 48 + carry; 
        carry = tmp / 10;
        tmp = tmp % 10;
        res = (char)(tmp + 48) + res;
    }
    if (carry > 0) res = "1" + res;
    return res;
}

int main()
{
    freopen("STAIRS1.inp", "r", stdin);
    freopen("STAIRS1.out", "w", stdout);
    int n;
    string d[101];
    d[0] = '1'; d[1] = '1'; d[2] = '2';
    for (int i = 3; i <= 100; i++) d[i] = add(d[i - 1], d[i - 2]);
    while (cin >> n) {
        cout << d[n] << '\n';
    }
    return 0;
}
