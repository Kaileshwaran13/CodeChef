#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int si;
        cin >> si;
        int ans;
        float arr[si];
        float sum = 0;
        for (int i = 0; i < si; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr, arr + si);
        sum -= arr[si - 1];
        double temp = sum / (si - 1) + arr[si - 1];
        cout << setprecision(7) << fixed;
        cout << temp << endl;

    }
    return 0;
}
