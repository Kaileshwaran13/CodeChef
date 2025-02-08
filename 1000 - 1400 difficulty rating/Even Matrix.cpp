#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < vector < int >> mat(n, vector < int > (n));
        int i = 0, j = 0;
        int count = 0;
        int curr = 1;
        while (count < n) {
            for (int j = 0; j < n; j++) {
                mat[i][j] = curr++;
            }
            count++;
            i++;
            if (count < n) {
                for (int j = n - 1; j >= 0; j--) {
                    mat[i][j] = curr++;
                }
                count++;
                i++;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;

        }
    }
}
