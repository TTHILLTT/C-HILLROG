#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
LL dp[10005], sum[10005], w[10005], m, n;
int main() {
	cin >> n >> m;
	for (LL i = 1; i <= n; i++) {
		dp[i] = 0x3f3f3f3f;
		cin >> w[i];
		sum[i] = sum[i - 1] + w[i];
	}
	for (LL i = 1; i <= n; i++) {
		sum[i] += 2 * m;
	}
	for (LL i = 1; i <= n; i++) {
		for (LL j = i; j <= n; j++) {
			dp[j] = min(dp[j], dp[j - i] + sum[i]);
		}
	}
	cout << dp[n] - m;
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/