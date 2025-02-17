#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        sort(arr, arr + n);
        int count = 0;
        vector < int > vec;
        for (int i = 0; i < n; i++) {
            if (arr[i] != arr[i - 1] + 1 and arr[i] != arr[i + 1] - 1) {
                vec.push_back(arr[i]);
                count++;
            }
        }
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] == vec[i + 1] - 2) {
                count--;
                i++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
