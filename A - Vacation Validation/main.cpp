#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,l,r;
string s;
int main() {
	cin>>n>>l>>r;
	cin>>s;
	for (ll i=l-1;i<=r-1;i++) {
		if (s[i]=='x') {
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
}