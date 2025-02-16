#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    while (1)
    {
        int h;
        cin >> h;
        if (h == 0)
            break;
        int size = (1 << h) - 1;
        vector < ll > arr(size);
        double compare[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
            compare[i] = arr[i];
        }
        int leaf = (1 << h - 1) - 1;
        for (int i = leaf - 1; i >= 0; i--)
        {
            if (compare[2 * i + 1] > compare[2 * i + 2])
            {
                arr[i] = (arr[i] * arr[2 * i + 1]) % mod;
                compare[i] = compare[i] * compare[2 * i + 1];
            }
            else
            {
                arr[i] = (arr[i] * arr[2 * i + 2]) % mod;
                compare[i] = compare[i] * compare[2 * i + 2];
            }
        }
        cout << arr[0] << endl;
    }
}
