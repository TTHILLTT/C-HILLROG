#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
string s;
LL n;
int main() {
	cin >> n >> s;
	for (LL i : s) {
		cout << (char)(((i - 'a') + n) % 26 + 'a');
	}
	return 0;
}