#include <iostream>
using namespace std;
typedef long long ll;
ll d[1005],dp[1005],n,x;
int main() {
    cin>>n;
    for(ll i=1;i<=n;i++) {
        cin>>x;
        d[i]=d[i-1]+x;
        if(d[i]>=0) {
            dp[i]=1;
        }
    }
    for(ll i=1;i<=n;i++) {
        for(ll j=1;j<i;j++) {
            if(dp[j]>0&&d[i]-d[j]>=0) {
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    if(dp[n]==0) {
        printf("Impossible");
        goto end;
    }
    cout<<dp[n];
    end:
    return 0;
}