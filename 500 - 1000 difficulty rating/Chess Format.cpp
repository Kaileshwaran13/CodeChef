#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int sum = a + b;
        if (sum < 3)
        {
            cout << "1" << '\n';
        }
        if (sum >= 3 && sum <= 10)
        {
            cout << "2" << '\n';
        }
        if (sum >= 11 && sum <= 60)
        {
            cout << "3" << '\n';
        }
        if (sum > 60)
        {
            cout << "4" << '\n';
        }
    }
}
