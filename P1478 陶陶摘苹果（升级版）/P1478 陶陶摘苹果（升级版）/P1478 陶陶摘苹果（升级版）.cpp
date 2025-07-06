#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<LL, LL> PLL;
LL n, s, a, b, ans;
PLL p[5005];
bool cmp(PLL x, PLL y) {
	if(x.second==y.second) {
		return x.first < y.first;
	}
	return x.second < y.second;
}
int main() {
	cin >> n >> s >> a >> b;
	for(LL i=1; i <= n; i++) {
		cin >> p[i].first >> p[i].second;
	}
	sort(p + 1, p + n + 1, cmp);
	for (LL i = 1; i <= n; i++) {
		if (s - p[i].second >= 0) {
			if (b + a >= p[i].first) {
				ans++;
				s -= p[i].second;
			}
		}
	}
	cout << ans;
	return 0;
}