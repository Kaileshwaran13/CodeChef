#include <bits/stdc++.h>
using namespace std;

signed ngcd(vector < int > vec) {
    int res = vec[0];
    for (int i = 1; i < vec.size(); i++) {
        res = __gcd(res, vec[i]);
    }
    return res;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n1;
        cin >> n1;
        vector < int > arr;
        set < int > st;
        int temp;
        for (int i = 0; i < n1; i++) {
            cin >> temp;
            if (st.find(temp) == st.end()) {
                arr.push_back(temp);
            }
            st.insert(temp);
        }

        sort(arr.begin(), arr.end());
        int n = arr.size();
        if (n == 1) {
            cout << 2 * arr[0] << endl;
            continue;
        }
        int a = arr[0];
        int b = arr[1];
        if (n == 2) {
            cout << a + b << endl;
        }
        else {
            vector < int > vec(arr.begin(), arr.end() - 2);
            int a = ngcd(vec);
            cout << max(__gcd(a, arr[n - 1]) + arr[n - 2], __gcd(a, arr[n - 2]) + arr[n - 1]) << endl;
        }
    }
}
