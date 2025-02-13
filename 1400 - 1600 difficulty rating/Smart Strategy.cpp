#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector < long long int > arr(n), x(q);
        long long int prod = 1;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (prod < 1e9) 
                prod *= arr[i];
        }
        for (int i = 0; i < q; i++) {
            cin >> x[i];
        }
        for (int i = 0; i < q; i++) {
            cout << x[i] / prod << " ";
        }
        cout << endl;
    }
}
