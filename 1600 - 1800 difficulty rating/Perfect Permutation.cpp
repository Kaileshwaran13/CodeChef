#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector < int > a(n);
        iota(a.begin(), a.end(), 1);
        a.erase(a.begin());
        a.insert(a.begin() + n - k, 1);
        for (int x: a) 
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
