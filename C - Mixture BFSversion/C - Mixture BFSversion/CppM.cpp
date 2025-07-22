#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
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
        queue<LL> q;
        q.push(0);
        vis[0] = true;
        while (!q.empty()) {
            LL mask = q.front();
            q.pop();
            for (LL i = 0; i < n; i++) {
                if (!(mask & (1LL << i))) {
                    LL nmask = mask | (1LL << i);
                    if (nmask <= full && !danger[nmask] && !vis[nmask]) {
                        vis[nmask] = true;
                        q.push(nmask);
                    }
                }
            }
        }
        if (vis[full]) {
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