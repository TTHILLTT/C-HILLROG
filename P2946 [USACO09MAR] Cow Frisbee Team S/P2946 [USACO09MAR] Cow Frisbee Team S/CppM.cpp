#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, f, dp[2005][2005];
const LL mod = 1e8;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> f;
	vector<LL>r(n + 5);
	for (LL i = 1; i <= n; i++) {
		cin >> r[i];
		r[i] %= f;
	}
	for (LL i = 1; i <= n; i++) {
		dp[i][r[i]]=1;
	}
	for (LL i = 1; i <= n; i++) {
		for (LL j = 0; j < f; j++) {
			dp[i][j] = ((dp[i][j] + dp[i - 1][j]) % mod + dp[i - 1][(j - r[i] + f) % f]) % mod;
		}
	}
	cout << dp[n][0];
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/