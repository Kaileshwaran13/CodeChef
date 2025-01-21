#include<iostream>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            arr[i] = n - i;
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
