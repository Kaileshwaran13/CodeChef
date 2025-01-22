#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t, n, a;
	cin >> t;
	while (t--) {
	    cin >> n;
	    long long mi = 1e10;
	    while (n--) {
	        cin >> a;
	        mi = min(mi, a);
	    }
	    cout << mi << '\n';
	}
	return 0;
}
