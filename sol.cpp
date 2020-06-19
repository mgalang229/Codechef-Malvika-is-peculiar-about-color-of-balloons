#include <bits/stdc++.h>

using namespace std;

void decode() {
	string s;
	cin >> s;
	int a = 0, b = 0;
	for(int i = 0; i < (int)s.size(); ++i) {
		if(s[i] == 'a') a++;
		else b++;
	}
	int ans = 0;
	if(a > b) ans = b;
	else if(a < b) ans = a;
	else ans = a;
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
