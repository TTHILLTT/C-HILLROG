#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pllll;
ll n,ans;
struct pair_hash {
    ll operator() (const std::pair<ll, ll>& p) const {
        return hash<ll>()(p.first) ^ (hash<ll>()(p.second) << 1);
    }
};
unordered_map<pllll, bool, pair_hash> mp;
int main() {
    cin>>n;
    vector<pllll> a(n+5);
    for (ll i=1;i<=n;i++) {
        cin>>a[i].first>>a[i].second;
    }
    for (ll i=1;i<=n;i++) {
        for (ll j=1;j<=n;j++) {
            if (i==j || mp[{i,j}]) {
                continue;
            }
            ans+=max(abs(a[i].first-a[j].first),abs(a[i].second-a[j].second));
            mp[{i,j}]=true;
            mp[{j,i}]=true;
        }
    }
    cout<<ans;
    return 0;
}