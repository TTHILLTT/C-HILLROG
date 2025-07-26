#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pllll;
ll T,n;
pllll info[100005];
bool cmp(pllll a,pllll b) {
    return a.first>b.first;
}
int main() {
    cin >> T;
    while (T--) {
        cin>>n;
        for (ll i=1;i<=n;i++) {
            cin>>info[i].first>>info[i].second;
        }
        sort(info+1,info+n+1,cmp);
        cout<<info[1].first+info[1].second<<endl;
    }
    return 0;
}