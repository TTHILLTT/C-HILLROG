#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll T,n;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> T;
	while (T--) {
		cin >> n;
		vector<ll> a(n);
		for (ll i = 0; i < n; i++) {
			cin >> a[i];
		}
		ll cnt = 0;
		for (ll i = 0; i < n; i++) {
			for (ll j = i + 1; j < n; j++) {
				ll redSum = a[i] + a[j],blueSum = 0;
				for (ll k = 0; k < n; k++) {
					if (k != i && k != j) {
						blueSum += a[k];
					}
				}
				if ((redSum % 2) == (blueSum % 2)) {
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}