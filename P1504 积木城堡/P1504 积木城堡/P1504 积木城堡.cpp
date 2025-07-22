#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, a[1005], maxx, num, sum, tot[1000005], dp[1000005];
int main() {
    cin >> n;
    for (LL p = 1; p <= n; p++) {
        memset(a, 0, sizeof a);
        memset(dp, 0, sizeof dp);
        dp[0] = 1;
        num = sum = 0;
        LL x;
        while (cin >> x && x != -1) {
            a[num++] = x;
            sum += x;
        }
        maxx = max(maxx, sum);
        for (LL i = 0; i < num; i++) {
            for (LL j = sum; j >= a[i]; j--) {
                if (!dp[j] && dp[j - a[i]]) {
                    dp[j] = 1;
                    tot[j]++;
                }
            }
        }
    }
    maxx++;
    while (--maxx) {
        if (tot[maxx] == n){
            goto end;
        }
    }
    end:
    cout << maxx;
    return 0;
}