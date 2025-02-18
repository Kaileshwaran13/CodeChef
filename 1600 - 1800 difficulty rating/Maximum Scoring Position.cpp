#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int arr[8];
        for (int i = 0; i < 8; i++)
        {
            cin >> arr[i];
        }
        vector < pair < int, int >> v;
        for (int i = 0; i < n; i++)
        {
            int x, D = 1, T = 1;
            switch (s[i]) {
                case 'd':
                    x = 2;
                    break;
                case 't':
                    x = 3;
                    break;
                case 'D':
                    x = 1;
                    D = 2;
                    break;
                case 'T':
                    x = 1;
                    T += 2;
                    break;
                default:
                    x = 1;
                    break;
            }
            pair y = make_pair(x, max(D, T));
            v.push_back(y);
        }
        long long max = 0;
        for (int i = 0; i < n - 7; i++)
        {
            long long score = 0, d = 0, t = 0;
            for (int j = 0; j < 8; j++)
            {
                score += (v[i + j].first) * arr[j];
                if (v[i + j].second == 2) 
                    d++;
                else if (v[i + j].second == 3) 
                    t++;
            }
            long long x = pow(2, d), y = pow(3, t);
            score = score * x * y;
            if (score > max) 
                max = score;
        }
        cout << max << endl;
    }

}
