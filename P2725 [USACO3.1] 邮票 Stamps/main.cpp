#include <iostream>
using namespace std;
typedef long long ll;
ll n,m;
ll v[55],use[2000005];
bool f[2000005];
int main() {
    cin>>m>>n;
    for (ll i=1;i<=n;i++) {
        cin>>v[i];
    }
    for (ll i=1;i<=2000000;i++) {
        use[i]=m+1;
    }
    ll k=0;
    f[0]=true;
    while (f[k]&&use[k]<=m) {
        for (ll i=1;i<=n;i++) {
            if (use[k+v[i]]>use[k]+1) {
                f[k+v[i]]=true;
                use[k+v[i]]=use[k]+1;
            }
        }
        k++;
    }
    cout<<k-1;
    return 0;
}