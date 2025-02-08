#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        vector < int > v;
        vector < int > v2;
        long long int a[2 * n], count = 0, count2 = 0;
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 1) {
                count++;
            } else {
                v.push_back(a[i]);
            }
        }
        if (count >= n)
            cout << abs(count - n) << endl;
        else {
            int sum = 0;
            for (int i = 0; i < v.size(); i++) {
                while (v[i] % 2 == 0) {
                    v[i] = v[i] / 2;
                    count2++;

                }
                v2.push_back(count2);
                count2 = 0;
            }
            sort(v2.begin(), v2.end());
            for (int i = 0; i < n - count; i++) {
                sum += v2[i];
            }

            cout << sum << endl;
        }

    }

    return 0;
}
