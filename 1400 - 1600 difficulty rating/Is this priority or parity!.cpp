#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k;
        cin >> n >> k;
        if (k == 1) {
            if (n & 1) 
                cout << "ODD" << endl;
            else 
                cout << "EVEN" << endl;
        }
        else if (k == 2) {
            cout << "ODD" << endl;
        }
        else {
            cout << "EVEN" << endl;
        }
    }
    return 0;
}
