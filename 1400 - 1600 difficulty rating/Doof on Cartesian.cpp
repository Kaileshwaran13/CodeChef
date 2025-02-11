#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        int q;
        cin >> q;
        while (q--) {
            int x, y;
            cin >> x >> y;
            int a = x + y;
            int low = 0, high = n - 1;
            int mid = (low + high) / 2;
            bool check = false;
            while (low <= high) {
                mid = (low + high) / 2;
                if (v[mid] == a) {
                    check = true;
                    break;
                } else if (v[mid] > a) 
                    high = mid - 1;
                else 
                    low = mid + 1;
            }
            if (check) 
                cout << "-1" << "\n";
            else 
                cout << low << "\n";
        }
    }
    return 0;
}
