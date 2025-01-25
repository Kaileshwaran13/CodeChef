#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        int arr[n];
        int cnt = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > d && !flag)
            {
                cnt++;
                flag = true;
            }
            if (arr[i] <= d && flag) {
                cnt++;
                flag = false;
            }
        }
        cout << cnt << endl;

    }
    return 0;

}
