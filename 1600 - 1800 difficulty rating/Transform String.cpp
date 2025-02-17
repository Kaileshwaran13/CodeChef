#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        long long n = a.size(), m = b.size();
        vector < long long > arr(n, 0);
        long long i = n - 1, j = m - 1, sum = 0;
        while (i >= 0 && j >= 0) {
            if (a[i] == b[j]) {
                arr[i] = 1;
                i--;
                j--;
            }
            else {
                i--;
            }
        }
        if (j >= 0) 
            cout << -1 << endl;
        else {
            long long sum = 0, c = 1;
            for (int i = 0; i < n; i++) {
                if (arr[i] == 1) {
                    c++;
                }
                else {
                    sum += c;
                }
            }
            cout << sum << endl;
        }
    }
}
