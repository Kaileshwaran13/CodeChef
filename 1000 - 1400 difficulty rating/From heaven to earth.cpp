#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, v1, v2;
        cin >> n >> v1 >> v2;
        double a = (n * sqrt(2)) / v1;
        double b = (2.0 * n) / v2;
        if (a < b) {
            cout << "Stairs" << endl;
        }
        else {
            cout << "Elevator" << endl;
        }
    }
    return 0;
}
