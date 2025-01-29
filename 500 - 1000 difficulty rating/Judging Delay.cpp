#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, count = 0;
        cin >> n;
        while (n--) {
            cin >> a >> b;
            int diff = b - a;
            if (diff > 5)
                count++;
        }
        cout << count << endl;

    }

    return 0;
}
