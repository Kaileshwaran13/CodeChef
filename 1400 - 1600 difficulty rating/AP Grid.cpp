#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (n <= m)
                {
                    cout << (n + 1) * i + 1 + (i + 1) * j << " ";
                }
                else
                {
                    cout << i + 1 + (m + i + 1) * j << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
