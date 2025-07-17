#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
LL n, m, x, dp[1005][1005];
int main() {
	cin >> n >> m >> x;
	for (LL i = 1; i <= n; i++) {
		LL a, b, c;
		cin >> a >> b >> c;
		for (LL j = m; j >= b; j--) {
			for (LL k = x; k >= c; k--) {
				dp[j][k] = max(dp[j][k], dp[j - b][k - c] + a);
			}
		}
	}
	cout << dp[m][x];
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/