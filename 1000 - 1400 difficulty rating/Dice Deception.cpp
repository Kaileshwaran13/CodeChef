#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--)
    {
        long long int n, k;
        cin >> n >> k;
        long long int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        int j = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {

            if (a[i] <= 3 && j < k)
            {
                sum += (7 - a[i]);
                j++;
            }
            else {
                sum += a[i];
            }
        }

        cout << sum;

        cout << endl;
    }

}
