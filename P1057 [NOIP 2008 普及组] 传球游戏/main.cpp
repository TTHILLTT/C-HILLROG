#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[35][35],i,j,m,n;
int main() {
    cin>>n>>m;
    dp[0][1]=1;
    for(ll i=1; i<=m; i++) {
        for(ll j=1; j<=n; j++) {
            if(j==1){
                dp[i][j]=dp[i-1][n]+dp[i-1][2];
            }
            else if(j==n) {
                dp[i][j]=dp[i-1][1]+dp[i-1][n-1];
            }
            else {
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j+1];
            }
        }
    }
    cout<<dp[m][1];
    return 0;
}
