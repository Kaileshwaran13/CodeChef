#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector < int > a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }
        int i = n / 2;
        int j = 1;
        for (; i < n; i++)
        {
            b[i] = j++;
        }
        for (i = 0; i < n / 2; i++)
        {
            b[i] = j++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }

}
