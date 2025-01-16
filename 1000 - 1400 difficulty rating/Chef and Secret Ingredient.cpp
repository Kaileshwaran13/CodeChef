#include <iostream>
using namespace std;

int main() {
    int t, n, x, flag, a;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a >= x)
                flag = 1;
        }
        cout << (flag == 1 ? "YES" : "NO") << '\n';
    }
    
}
