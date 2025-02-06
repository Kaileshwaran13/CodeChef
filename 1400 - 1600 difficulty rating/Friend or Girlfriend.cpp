#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        char c;
        cin >> s >> c;
        long long int sum = 0;
        int prev = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                sum += (n - i) * (i + 1 - prev);
                prev = i + 1;;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
