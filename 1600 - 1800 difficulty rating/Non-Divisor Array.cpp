#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int z = 0; z < t; z++) {
        int n, p;
        cin >> n;
        p = n;
        int arr[n];
        int count = 1;
        while (n != 1) {
            for (int i = n / 2; i < n; i++) {
                arr[i] = count;
            }
            n = n / 2;
            count++;
        }
        arr[0] = count;
        cout << count << endl;
        for (int k = 0; k < p; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}
