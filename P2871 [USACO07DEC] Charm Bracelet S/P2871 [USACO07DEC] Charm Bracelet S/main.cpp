#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
LL n, m, dp[12885];
int main() {
	cin >> n >> m;
	for (LL i = 1; i <= n; i++) {
		LL w, d;
		cin >> w >> d;
		for (LL j = m; j > 0; j--) {
			if (w <= j) {
				dp[j] = max(dp[j], dp[j - w] + d);
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