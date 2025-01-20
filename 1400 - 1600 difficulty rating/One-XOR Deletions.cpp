#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--> 0)
    {
        long long int n;
        int count = 0;
        cin >> n;
        int * arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int j = 0, ans = 1;
        for (int i = 1; i < n; i++)
        {
            if ((arr[j] ^ arr[i]) <= 1)
            {
                ans += 1;
            } else {
                count = max(count, ans);
                j = i;
                ans = 1;
            }
        }
        count = max(count, ans);
        cout << (n - count) << '\n';
    }
}
