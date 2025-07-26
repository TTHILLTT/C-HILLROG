#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string decToBase(ll num, ll base) {
    if (!num) {
        return "00";
    }
    string digits = "0123456789ABCDEF", res;
    num = abs(num);
    while (num > 0) {
        res += digits[num % base];
        num /= base;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main() {
    ll n;
    cin >> n;
    string ans=decToBase(n,16);
    if (ans.length()==1) {
        cout<<"0";
    }
    cout<<ans;
    return 0;
}