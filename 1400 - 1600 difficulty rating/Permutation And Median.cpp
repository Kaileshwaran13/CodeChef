#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, s = 1, p;
        cin >> n;
        p = n;
        while (s <= n / 2)
        {
            cout << p << " " << s << " ";
            p--;
            s++;
        }
        if (n & 1) 
            cout << n / 2 + 1;
        cout << endl;
    }
    return 0;
}
