#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, v;
        cin >> n >> v;
        long long max_cost = (n * (n - 1)) / 2, min_cost = (v - 1) + (((n - v) * (n - v + 1)) / 2);
        if (v >= n) 
            min_cost = n - 1;
        cout << max_cost << " " << min_cost << endl;
    }
}
