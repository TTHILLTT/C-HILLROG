#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, M, T, dp[1005][1005];
pair<LL, LL> p[100005];
int main() {
	cin >> n >> M >> T;
	for(LL i= 1; i <= n; i++) {
		cin >> p[i].first >> p[i].second;
		for (LL j = M; j >= p[i].first; j--) {
			for (LL k = T; k >= p[i].second; k--) {
				dp[j][k] = max(dp[j][k], dp[j - p[i].first][k - p[i].second] + 1);
			}
		}
	}
	cout << dp[M][T];
	return 0;
}