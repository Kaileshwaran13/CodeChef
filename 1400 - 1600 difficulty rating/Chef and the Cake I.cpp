#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t = 0;
    cin >> t;
    while (t--) {
        long long cake[1069][1069];

        for (int i = 0; i < 1069; i++) {
            for (int j = 0; j < 1069; j++) {
                cake[i][j] = 0;
            }
        }
        long long coordinates[4];
        cin >> coordinates[0] >> coordinates[1] >> coordinates[2] >> coordinates[3];
        for (int i = coordinates[0]; i < coordinates[2]; i++) {
            for (int j = coordinates[1]; j < coordinates[3]; j++) {
                cake[i][j] = 1;
            }
        }
        cin >> coordinates[0] >> coordinates[1] >> coordinates[2] >> coordinates[3];
        for (int i = coordinates[0]; i < coordinates[2]; i++) {
            for (int j = coordinates[1]; j < coordinates[3]; j++) {
                cake[i][j] = 1;
            }
        }
        long long ans = 0;
        for (int i = 0; i < 1069; i++) {
            for (int j = 0; j < 1069; j++) {
                ans += cake[i][j];
            }
        }
        cout << ans << endl;
    }
}
