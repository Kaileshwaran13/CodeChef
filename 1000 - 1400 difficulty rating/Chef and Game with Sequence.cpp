#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] % 2 != 0)
                c++;
        }
        if (c % 2 != 0 && n > 1) cout << 2 << endl;
        else cout << 1 << endl;
    }
    return 0;
}
