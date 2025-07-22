#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL m, n, t, x, g[205][205], w[10005], v[10005], b[10005], dp[10005];
int main() {
	cin >> m >> n;
	for (LL i = 1; i <= n; i++) {
		cin >> w[i] >> v[i] >> x;
		t = max(t, x);
		b[x]++;
		g[x][b[x]] = i;
	}
	for (LL i = 1; i <= t; i++) {
		for (LL j = m; j >= 0; j--) {
			for (LL k = 1; k <= b[i]; k++) {
				if (j >= w[g[i][k]]) {
					dp[j] = max(dp[j], dp[j - w[g[i][k]]] + v[g[i][k]]);
				}
			}
		}
	}
	cout << dp[m];
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/