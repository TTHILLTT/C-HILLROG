#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL s[100005], pr[200005], n, ans, tot;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (LL i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (LL i = 1; i <= 2 * n; i++) {
		pr[i] = pr[i - 1] + s[(i - 1) % n];
	}
	tot = pr[n];
	LL p = 0;
	for (LL i = 0; i < n; i++) {
		//LL p = 0;
		for (; p < i + n && pr[p + 1] - pr[i] <= tot / 2; p++) {
		}
		LL d1 = pr[p] - pr[i], d2 = tot - d1;
		ans = max(ans, min(d1, d2));
	}
	cout << ans;
	return 0;
}