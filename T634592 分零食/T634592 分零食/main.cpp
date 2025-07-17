#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main() {
    int n, m;
    cin >> m >> n;
    vector<int> dp(m + 1, 0);
    for (int i = 0; i < n; i++) {
        int c, v;
        cin >> c >> v;
        if (c > m) continue;
        for (int j = m; j >= c; j--) {
            dp[j] = max(dp[j], dp[j - c] + v);
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