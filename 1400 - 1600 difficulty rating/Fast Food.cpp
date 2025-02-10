#include <bits/stdc++.h>
using namespace std;

int max(int a[], int e) {
    int max = a[0];
    for (int i = 1; i < e; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    return max;
}
int main() {
    int t;
    cin >> t;
    int te[t];
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int a[n], b[n], m[n + 1], s = 0, y = 0, u = 0;
        for (int q = 0; q < n; q++) {
            cin >> a[q];
        }
        for (int q = 0; q < n; q++) {
            cin >> b[q];
            s += b[q];
        }
        m[0] = s;
        for (int p = 0; p < n; p++) {
            y += a[p];
            u += b[p];
            m[p + 1] = s - u + y;
        }
        te[i] = max(m, n + 1);
    }
    for (int i = 0; i < t; i++) {
        cout << te[i] << endl;
    }

    return 0;
}
