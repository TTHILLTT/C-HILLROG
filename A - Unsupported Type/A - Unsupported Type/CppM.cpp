#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n;
int main() {
	cin >> n;
	vector<LL> a(n);
	for (LL i = 0; i < n; i++) {
		cin >> a[i];
	}
	LL x;
	cin >> x;
	for(LL i = 0; i < n; i++) {
		if (a[i] == x) {
			cout << "Yes";
			return 0;
		}
	}
	cout << "No";
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/