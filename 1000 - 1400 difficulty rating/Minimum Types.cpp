#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector < int > arr(n), brr(n), products;
        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = 0; i < n; i++) cin >> brr[i];
        for (int i = 0; i < n; i++) {
            products.push_back(arr[i] * brr[i]);
        }
        sort(products.begin(), products.end(), greater < int > ());
        int sum = 0, count = 0;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            sum += products[i];
            count++;
            if (sum >= x) {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << count << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
