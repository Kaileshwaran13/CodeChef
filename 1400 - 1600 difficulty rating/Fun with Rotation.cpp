#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int curr = 0;
    char ch;
    int value;
    for (int i = 0; i < m; i++)
    {
        cin >> ch;
        if (ch == 'R')
        {
            cin >> value;
            cout << a[(curr + value - 1) % n] << endl;
        }
        else if (ch == 'C')
        {
            cin >> value;
            curr = (curr + value) % n;
        }
        else if (ch == 'A')
        {
            cin >> value;
            curr = (curr + n - value) % n;
        }
    }
    return 0;
}
