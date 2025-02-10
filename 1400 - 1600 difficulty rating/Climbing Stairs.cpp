#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        ll mx = * max_element(arr, arr + n);
        vector < int > index;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == mx)
                index.push_back(i + 1);
        }
        ll result = 0;
        for (auto i: index)
        {
            if (i >= k)
                result += n - i + 1;
        }
        cout << result << endl;
    }
    return 0;
}
