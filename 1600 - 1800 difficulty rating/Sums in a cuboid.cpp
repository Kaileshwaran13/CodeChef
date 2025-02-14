#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        vector < vector < vector < int >>> v;
        for (int i = 0; i < x; i++) {
            v.push_back({{}});
            for (int j = 0; j < y; j++) {
                v[i].push_back({});
                for (int k = 0; k < z; k++) {
                    int ele;
                    cin >> ele;
                    v[i][j].push_back(ele);
                }
            }
        }
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                for (int i = x - 1; i >= 1; i--) {
                    v[i][j][k] -= v[i - 1][j][k];
                }
            }
        }
        for (int i = 0; i < x; i++) {
            for (int k = 0; k < z; k++) {
                for (int j = y - 1; j >= 1; j--) {
                    v[i][j][k] -= v[i][j - 1][k];
                }
            }
        }
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                for (int k = z - 1; k >= 1; k--) {
                    v[i][j][k] -= v[i][j][k - 1];
                }
            }
        }
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                for (int k = 0; k < z; k++) {
                    cout << v[i][j][k] << " ";
                }
                cout << "\n";
            }
        }
    }
    return 0;
}
