#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector < long long int > v1, v2;
        long long int count = 1, j = 0;
        for (long long int k = 0; k < n; k++)
        {
            long long int ele;
            cin >> ele;
            v1.push_back(ele / abs(ele));
        }
        for (int i = 0; i < (n - 1); i++)
        {
            if ((v1[i] + v1[i + 1]) == 0)
            {
                count++;
            }
            else
            {
                v2.push_back(count);
                count = 1;
            }
        }
        v2.push_back(count);
        for (long long int h = 0; h < v1.size(); h++)
        {
            cout << v2[j] << " ";
            v2[j]--;
            if (v2[j] == 0) j++;
        }
        cout << endl;
    }
    return 0;
}
