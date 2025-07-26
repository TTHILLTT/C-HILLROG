#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
struct node{
    ll h,a,c;
}a[405];
bool cmp(node x,node y) {
    return x.a<y.a;
}
ll dp[40005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin>>n;
    for(ll i=1;i<=n;i++) {
        cin>>a[i].h>>a[i].a>>a[i].c;
    }
    sort(a+1,a+n+1,cmp);
    for(ll i=1;i<=n;i++) {
        for(ll k=1;k<=a[i].c;k++) {
            for(ll j=a[i].a;j>=a[i].h;j--) {
                dp[j]=max(dp[j],dp[j-a[i].h]+a[i].h);
            }
        }
    }
    ll ans=0;
    for(ll i=1;i<=a[n].a;i++) {
        ans=max(ans,dp[i]);
    }
    cout<<ans;
    return 0;
}