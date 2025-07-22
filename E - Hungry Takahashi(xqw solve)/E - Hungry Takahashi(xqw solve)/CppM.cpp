#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, m;
vector<vector<LL> > A;
vector<vector<LL>> dp;
LL P[200005];
int main() {
	cin >> n >> m;
	A = vector<vector<LL>>(n + 1, vector<LL>(m + 1));
	for (LL i = 1; i <= n; i++) {
		for (LL j = 1; j <= m; j++) {
			cin >> A[i][j];
		}
	}
	for (LL i = 1; i <= n + m - 1; i++) {
		cin >> P[i];
	}
	dp = vector<vector<LL>>(n + 1, vector<LL>(m + 1, 0));
	for (LL i = n; i >= 1; i--) {
		for (LL j = m; j >= 1; j--) {
			if (i == n && j == m) {
				dp[i][j] = max(0ll, P[n + m - 1] -= A[n][m]);
			}
			else {
				dp[i][j] = 1e18;
				if (i + 1 <= n) {
					dp[i][j] = min(dp[i][j], dp[i + 1][j]);
				}
				if (j + 1 <= m) {
					dp[i][j] = min(dp[i][j], dp[i][j + 1]);
				}
				dp[i][j] = max(0LL, dp[i][j] + P[i + j - 1] - A[i][j]); 
			}
		}
	}
	cout << dp[1][1];
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/