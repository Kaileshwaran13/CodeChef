#include <iostream>
using namespace std;

int main() { 
    int t, n, k, i;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cin >> s;
        if (s[0] == '0')
        {
            s[0] = '1';
            k--;
        }
        cout << s;
        while (k--)
            cout << 0;
        cout << '\n';
    }
}
