#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int X, Y;
        cin >> X >> Y;
        long long int N = Y * X - Y - X;
        if (X == 2 && Y == 2) 
            cout << "2" << endl;
        else if (X == 1 && Y == 1)
            cout << "1" << endl;
        else if (N < 0) 
            cout << max(X, Y) - 1 << endl;
        else 
            cout << N << endl;
    }
    return 0;
}
