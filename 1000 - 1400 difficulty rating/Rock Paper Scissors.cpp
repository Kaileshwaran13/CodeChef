#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--)
    {
        long long int n;
        cin >> n;
        string ss;
        cin >> ss;
        int c = 0;
        int conse = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (ss[i] == ss[i + 1])
            {
                conse++;
                i++;
            }
        }

        cout << n - conse << endl;
    }

}
