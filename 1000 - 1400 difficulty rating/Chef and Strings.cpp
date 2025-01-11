#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        long int a[n];
        for (long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll int sum = 0;
        for (long int i = 0; i < n - 1; i++)
        {
            sum += abs(a[i + 1] - a[i]);
        }
        cout << sum - (n - 1) << endl;
    }
}
