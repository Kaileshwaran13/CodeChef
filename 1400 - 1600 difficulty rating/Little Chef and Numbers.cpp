#include <iostream>
#define long long ll;
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int nums[n];
        int i;
        for (i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        ll ctr1 = 0, ctr2 = 0;
        for (i = 0; i < n; i++)
        {
            if (nums[i] > 1)
                ctr1++;

        }
        for (i = 0; i < n; i++)
        {
            if (nums[i] == 2)
                ctr2++;
        }
        cout << (ctr1 * (ctr1 - 1) / 2) - (ctr2 * (ctr2 - 1) / 2) << '\n';

    }
    return 0;
}
