#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
void dfs(LL mask, LL n, vector<bool>& danger, vector<bool>& vis) {
	vis[mask] = true;
	for (LL i = 0; i < n; i++) {
		if (!(mask & (1LL << i))) {
			LL nmask = mask | (1LL << i);
			if (!danger[nmask] && !vis[nmask]) {
				dfs(nmask, n, danger, vis);
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	LL T;
	cin >> T;
	while (T--) {
		LL n;
		string s;
		cin >> n >> s;
		LL full = (1LL << n);
		vector<bool> danger(full, false);
		vector<bool> vis(full, false);
		full--;
		for (LL i = 1; i <= full; i++) {
			danger[i] = (s[i - 1] == '1');
		}
		dfs(0, n, danger, vis);
		if(vis[full]) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}
	return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/