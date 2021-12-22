#include <bits/stdc++.h>
using namespace std;

void quickSort(long a[], long b[], long c[], long left, long right) {
	long i = left, j = right;
	long pivot = b[left + rand() % (right - left)];
	while (i <= j) {
		while (b[i] < pivot) ++i;
		while (b[j] > pivot) --j;
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
    freopen("HIREPC.inp", "r", stdin);
    freopen("HIREPC.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n;
    cin >> n;
    long a[n + 1], b[n + 1], c[n + 1], d[n + 1], max = 0, s = 0;
    for (long i = 1; i <= n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    quickSort(a, b, c, 1, n);
    memset(d, 0, sizeof d);
    for (long i = 1; i <= n; i++) {
        s = 0;
        for (int j = 1; j <= i - 1; j++)
            if ((a[i] >= b[j]) && (s < d[j])) s = d[j];
        d[i] = s + c[i];
    }
    for (long i = 1; i <= n; i++)
        if (max < d[i]) max = d[i];
    cout << max;
    return 0;
}
