#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            count = count ^ a[i];
        }
        if ((n & 1) == count)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
