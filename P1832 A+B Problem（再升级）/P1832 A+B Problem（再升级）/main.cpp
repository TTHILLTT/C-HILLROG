#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n;
vector<bool> prime;
vector<vector<LL>> dp;
void sieve(LL limit) {
    prime.assign(limit + 1, true);
    prime[0] = prime[1] = false;
    for (LL i = 2; i * i <= limit; i++) {
        if (prime[i]) {
            for (LL j = i * i; j <= limit; j += i) {
                prime[j] = false;
            }
        }
    }
}
LL dfs(LL i, LL sum) {
    if (sum > n) {
        return 0;
    }
    if (sum == n) {
        return 1;
    }
    if (dp[i][sum] != -1) {
        return dp[i][sum];
    }
    LL res = 0;
    for (LL j = i; j <= n - sum; j++) {
        if (prime[j]) {
            res += dfs(j, sum + j);
        }
    }
    return dp[i][sum] = res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    sieve(n);
    dp.assign(n + 2, vector<LL>(n + 2, -1));
    cout << dfs(1, 0);
    return 0;
}
/*
===========================================================
		Programed By TTHILLTT							 /
		Powered By Visual Studio 2022 Enterprise		/
========================================================
*/