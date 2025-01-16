#include <iostream>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (i + 1 + count == a[i])
            {
                count++;
            }
        }
        cout << count << '\n';

    }
}
