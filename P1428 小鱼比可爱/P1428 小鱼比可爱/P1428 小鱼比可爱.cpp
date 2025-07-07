#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n;
int main() {
	cin >> n;
	vector<LL> a(n);
	for(LL i = 0; i < n; i++) {
		cin >> a[i];
		LL sum = 0;
		for(LL j = i; j >= 0; j--) {
			if (a[j] < a[i]) {
				sum++;
			}
		}
		cout << sum << " ";
	}
	return 0;
}