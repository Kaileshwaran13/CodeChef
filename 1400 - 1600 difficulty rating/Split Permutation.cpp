#include <bits/stdc++.h>
#define lil long long int
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;

        if (n % 2 == 0)
        {
            for (int i = 1; i <= (n / 2); i++)
            {
                cout << i << " " << n - i + 1 << " ";
            }
            cout << endl;
        }
        else
        {
            int t = n;
            n--;
            for (int i = 1; i <= (n / 2); i++)
            {
                cout << i << " " << n - i + 1 << " ";
            }
            cout << t << endl;
        }

    }

}
