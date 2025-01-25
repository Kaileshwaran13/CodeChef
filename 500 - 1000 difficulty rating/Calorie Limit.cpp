#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n;
        cin >> m;
        int arr[n];
        int sum = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum > m) {
                break;
            }
            cnt++;
        }
        cout << cnt << endl;
    }
}
