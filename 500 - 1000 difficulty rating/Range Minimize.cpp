#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int possible1 = v[n - 1] - v[2];
        int possible2 = v[n - 3] - v[0];
        int possible3 = v[n - 2] - v[1];
        int minimum = min(possible1, possible2);
        int final = min(minimum, possible3);
        cout << final << endl;
    }

}
