#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> arr[i][j];
            }
        }
        int a = min(arr[1][0], arr[0][1]);
        int b = min(arr[2][0], arr[0][2]);
        int c = min(arr[2][1], arr[1][2]);
        int d = max(arr[2][1], arr[1][2]);
        int e = d - c;
        int sum = a + b + c;
        cout << sum + 2 * (e) << endl;
    }
    return 0;
}
