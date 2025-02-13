#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, cnt;
    long long int temp;
    cin >> t;
    while (t--) {
        cin >> n;
        vector < long long int > arr;
        int min_opr = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            if (min_opr > 0) {
                cnt = 0;
                while (temp > 0 && temp % 2 == 0) {
                    temp = temp / 2;
                    cnt++;
                }
                min_opr = min(min_opr, cnt);
            }
        }
        cout << min_opr << endl;
    }
    return 0;
}
