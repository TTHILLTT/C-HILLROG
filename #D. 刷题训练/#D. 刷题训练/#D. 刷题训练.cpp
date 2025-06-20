#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n;
map<LL, LL> day_cnt;
int main() {
	cin >> n;
	vector<LL> res(n + 5), a(n + 5), b(n + 5);
	for (LL i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		for (LL d = a[i]; d < a[i] + b[i]; d++) {
			day_cnt[d]++;
		}
	}
	for (auto& p : day_cnt) {
		if (p.second >= 1 && p.second <= n) {
			res[p.second]++;
		}
	}
	for (LL i = 1; i <= n; i++) {
		cout << res[i] << ' ';
	}
	return 0;
}