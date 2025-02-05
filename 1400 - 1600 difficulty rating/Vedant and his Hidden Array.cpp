#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k % 2 == 1)
        {
            if (n % 2 == 0) 
                cout << "Even" << endl;
            else 
                cout << "Odd" << endl;

        }
        else if (k % 2 == 0)
        {
            if (n == 1) 
                cout << "Even" << endl;
            else 
                cout << "Impossible" << endl;
        }
    }
    return 0;
}
