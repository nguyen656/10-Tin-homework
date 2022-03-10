#include <bits/stdc++.h>
using namespace std;

#define debug(x) cerr << #x << " is " << x << '\n';

void fileIO()
{
    freopen("coins.inp", "r", stdin);
    freopen("coins.out", "w", stdout);
}

void quickSort(long a[], long b[], long c[], long left, long right) 
{
	  long i = left, j = right;
	  long pivot = c[left + rand() % (right - left)];
	  while (i <= j) {
		    while (c[i] < pivot) ++i;
		    while (c[j] > pivot) --j;
		    if (i <= j) {
			      swap(a[i], a[j]);
			      swap(b[i], b[j]);
			      swap(c[i], c[j]);
			      ++i;
			      --j;
		    }
	  }
	  if (left < j) quickSort(a, b, c, left, j);
	  if (i < right) quickSort(a, b, c, i, right);
}

int main()
{
    fileIO();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n, m;
    cin >> n >> m;
    long a[n + 1], b[n + 1], c[n + 1];
    for (long i = 1; i <= n; ++i) cin >> a[i];
    for (long i = 1; i <= n; ++i) cin >> b[i];
    for (long i = 1; i <= n; ++i) c[i] = b[i] - a[i];
    quickSort(a, b, c, 1, n);
    long i = 1, t = m;
    while (t >= c[i] && i <= n) {
        t += a[i];
        ++i;
    }
    cout << t;
    return 0;
}
