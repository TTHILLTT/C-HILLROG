#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
const int N = 1000;
LL dp[N][N], w[N], c[N], t[N], n, m, r;
int main() {
	cin >> n;
	for (LL i = 1; i <= n; i++) {
		cin >> c[i] >> w[i] >> t[i];
	}
	cin >> m >> r;
	for (LL i = 1; i <= n; i++) {
		for (LL j = m; j >= c[i]; j--) {
			for (LL k = r; k >= w[i]; k--) {
				if (dp[j - c[i]][k - w[i]] + 20000 - t[i] > dp[j][k]) {
					dp[j][k] = dp[j - c[i]][k - w[i]] + 20000 - t[i];
				}
			}
		}
	}
	cout << ((dp[m][r] / 20000 + 1) * 20000) - dp[m][r];
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/