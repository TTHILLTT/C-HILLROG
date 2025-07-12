#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
string s;
LL n;
int main() {
    cin >> n;
    LL total = 0;
    for (LL i = 1; i <= n; i++) {
        char x;
        LL num;
        cin >> x >> num;
        if (num > 100) {
            cout << "Too Long";
            return 0;
        }
        if (total + num > 100) {
            cout << "Too Long";
            return 0;
        }
        total += num;
        s.append(num, x);
    }
    cout << s;
    return 0;
}