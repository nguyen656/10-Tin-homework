#include <bits/stdc++.h>
using namespace std;

void quickSort(long a[], long b[], int left, int right) 
{
	  int i = left, j = right;
	  int pivot = a[left + rand() % (right - left)];
	  while (i <= j) {
		    while (a[i] < pivot) ++i;
		    while (a[j] > pivot) --j;
		    if (i <= j) {
			      swap(a[i], a[j]);
			      swap(b[i], b[j]);
			      ++i;
			      --j;
		    }
	  }
	  if (left < j) quickSort(a, b, left, j);
	  if (i < right) quickSort(a, b, i, right);
}

int main()
{
    freopen("SEGMINT.inp", "r", stdin);
    freopen("SEGMINT.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long a[n + 1], b[n + 1], c[n + 1], max, maxc = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
    }
    quickSort(a, b, 1, n);
    c[1] = 1;
    for (int i = 2; i <= n; i++) {
        max = 0;
        for (int j = 1; j <= i - 1; j++)
            if ((b[j] < a[i]) && (max < c[j])) max = c[j];
        c[i] = max + 1;
        if (maxc < c[i]) maxc = c[i];
    }
    cout << maxc;
    return 0;
}
