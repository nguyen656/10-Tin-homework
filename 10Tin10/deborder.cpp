#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("DEBORDER.inp", "r", stdin);
    freopen("DEBORDER.out", "w", stdout);
    int d[21];
	  d[0] = 0;
	  d[1] = 1;
	  d[2] = 3;
	  for (int i = 3 ; i <= 20 ; i++) d[i] = d[i - 2] * 2 + d[i - 1];
	  int n;
	  while (cin >> n) cout << d[n] << "\n";
    return 0;
}
