#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int c, h;
        c = n / 4;
        n = n % 4;
        h = n / 2;
        cout << c + h << endl;
    }

}
