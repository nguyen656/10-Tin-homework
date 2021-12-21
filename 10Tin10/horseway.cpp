#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("HORSEWAY.inp", "r", stdin);
    freopen("HORSEWAY.out", "w", stdout);
    int n, m, a[11], d[31];
	  cin >> n >> m;
	  for(int i = 0 ; i < m ; i++) cin >> a[i];
	  memset(d, 0, sizeof d);
	  d[0] = 1;
	  for (int i = 0 ; i <= n ; i++) 
		    for (int j = 0 ; j < m ; j++) 
			      if (i + a[j] <= n) d[i + a[j]] += d[i];
	  cout << d[n];
    return 0;
}
