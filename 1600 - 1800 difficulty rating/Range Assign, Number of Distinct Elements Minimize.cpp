#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int found = 0;
        vector < int > arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if (arr[0] == arr[n - 1]) {
            cout << "YES" << endl;
            found = 1;
        }
        for (int i = 0; i < n; i++) {
            int s = arr[0];
            int e = arr[n - 1];
            if (s == arr[i] && arr[i + 1] == e && !found) {
                cout << "YES" << endl;
                found = 1;
                break;
            }
        }
        if (!found) {
            cout << "NO" << endl;
        }
    }
    return 0;
}
