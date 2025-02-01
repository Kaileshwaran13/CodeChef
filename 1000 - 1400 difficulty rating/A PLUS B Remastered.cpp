#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector < int > arr1(n);
        vector < int > arr2(n);
        for (auto & it: arr1)
        {
            cin >> it;
        }
        for (auto & it: arr2)
        {
            cin >> it;
        }
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end(), greater < int > ()); 
        bool m = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr1[i] + arr2[i] != arr1[i + 1] + arr2[i + 1])
            {
                m = 1;
                break;
            }
        }
        if (m == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (auto it: arr1)
            {
                cout << it << " ";
            }
            cout << endl;
            for (auto it: arr2)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
}
