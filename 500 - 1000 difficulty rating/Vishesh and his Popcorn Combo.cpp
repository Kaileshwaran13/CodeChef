#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

        int A = a1 + a2;
        int B = b1 + b2;
        int C = c1 + c2;

        cout << max(A, max(B, C)) << endl;
    }
    return 0;
}
