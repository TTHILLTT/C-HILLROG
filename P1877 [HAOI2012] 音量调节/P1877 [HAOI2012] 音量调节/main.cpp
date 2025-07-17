#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
LL n, beginLevel, maxLevel, dp[1001][1001], c[1001];
int main() {
	cin >> n >> beginLevel >> maxLevel;
	for (LL i = 1; i <= n; i++) {
		cin >> c[i];
	}
	dp[0][beginLevel] = 1;
	for (LL i = 1; i <= n; i++) {
		for (LL j = 0; j <= maxLevel; j++) {
			if (dp[i - 1][j] && j + c[i] <= maxLevel) {
				dp[i][j + c[i]] = 1;
			}
			if (dp[i - 1][j] && j - c[i] >= 0) {
				dp[i][j - c[i]] = 1;
			}
		}
	}
	for (LL i = maxLevel; i >= 0; i--) {
		if (dp[n][i]) {
			cout << i;
			goto end;
		}
	}
	cout << -1;
	end:
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/