#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int initial_distance = X * 10;
        int required_speed = Y;
        int numerator = 10 * (Y - X);
        int denominator = 100 - Y;
        int t = (numerator + denominator - 1) / denominator;
        cout << t << endl;
    }
    return 0;
}
