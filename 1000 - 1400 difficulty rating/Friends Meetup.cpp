#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--> 0)
    {
        int x1, x2;
        cin >> x1 >> x2;
        if (x1 >= x2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
