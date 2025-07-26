#include <bits/stdc++.h>
using namespace std;
int n,m,maxx=-2147483647,f[800005];
struct {
    int s,f;
}cow[405];
int max(int a,int b) {
    return a>b?a:b;
}
int main() {
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>cow[i].s>>cow[i].f;
    }
    memset(f,-0x3f,sizeof(f));
    f[400000]=0;
    for(int i=1;i<=n;i++) {
        if(cow[i].s>=0) {
            for(int j=800000;j>=cow[i].s;j--) {
                f[j]=max(f[j],f[j-cow[i].s]+cow[i].f);
            }
        }else {
            for(int j=0;j<=800000+cow[i].s;j++) {
                f[j]=max(f[j],f[j-cow[i].s]+cow[i].f);
            }
        }
    }
    for(int i=400000;i<=800000;i++) {
        if(f[i]>=0) {
            maxx=max(maxx,f[i]+i-400000);
        }
    }
    cout<<maxx;
    return 0;
}