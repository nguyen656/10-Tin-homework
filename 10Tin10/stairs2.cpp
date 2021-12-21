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
    freopen("STAIRS2.inp","r",stdin);
    freopen("STAIRS2.out","w",stdout);
    int n;
    cin >> n;
    string d[101];
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    d[0] = '0';
    if (a[1] == 0) d[1] = '0';
    else d[1] = '1';
    if (a[2] == 0) d[2] = '0';
    else d[2] = '2';
    for (int i = 3; i <= n; i++) {
        if (a[i] == 0) d[i] = '0';
        else if (a[i - 1] == 0 && a[i - 2] == 1) d[i] = d[i - 2];
        else if (a[i - 1] == 1 && a[i - 2] == 0) d[i] = d[i - 1];
        else if (a[i - 1] == 1 && a[i - 2] == 1) d[i] = add(d[i - 1], d[i - 2]);
    }
    cout << d[n];
    return 0;
}
