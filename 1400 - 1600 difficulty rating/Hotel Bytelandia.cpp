#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector < int > a, b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }

        int answer = INT_MIN;
        unordered_map < int, int > m;
        for (int i = 0; i < n; i++)
        {
            for (int j = a[i]; j < b[i]; j++)
            {
                m[j]++;
                answer = max(answer, m[j]);
            }
        }
        cout << answer << '\n';
    }
}
