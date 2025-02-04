#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < n; i++) {
            int dist = 0;
            if (a[i] < b[i]) 
                dist = b[i] - a[i];
            else 
                dist = 26 - (a[i] - b[i]);
            cout << (9 * dist) % 26 << " ";
        }
        cout << endl;
    }
    return 0;
}
