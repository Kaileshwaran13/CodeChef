#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                count++;
            }
            else if (b[i] == 'N') {
                continue;
            }
            else {
                i++;
            }
        }
        cout << count << endl;

    }
    return 0;
}
