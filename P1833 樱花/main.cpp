#include<iostream>
using namespace std;
typedef long long ll;
ll t[1000005],c[1000005],a[1000005],te1,te2,ts1,ts2,n,tz,dp[1005];
char temp;
int main() {
    cin>>te1>>temp>>te2>>ts1>>temp>>ts2>>n;
    tz=60*(ts1-te1)+ts2-te2;
    for(ll p=1;p<=n;p++) {
        cin>>t[p]>>c[p]>>a[p];
    }
    for(ll i=1;i<=n;i++) {
        if(a[i]==0) {
            for(ll j=t[i];j<=tz;j++) {
                dp[j]=max(dp[j],dp[j-t[i]]+c[i]);
            }
        }
        else {
            for(ll l=1;l<=a[i];l++) {
                for(ll j=tz;j>=l*t[i];j--) {
                    dp[j]=max(dp[j],dp[j-t[i]]+c[i]);
                }
            }
        }
    }
    cout<<dp[tz];
    return 0;
}