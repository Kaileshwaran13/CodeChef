#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--)
    {
        long long xe, ye;
        char de;
        cin >> xe >> ye >> de;
        long long n;
        cin >> n;
        long long x[n], y[n];
        char d[n];
        for (int i = 0; i < n; i++)
            cin >> x[i] >> y[i] >> d[i];
        for (int i = 0; i < n; i++)
        {
            x[i] = x[i] - xe;
            y[i] = y[i] - ye;
        }
        float t = 0, t1 = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            float f;
            f = (((x[i] * x[i]) + (y[i] * y[i])));
            if (x[i] == 0 && y[i] > 0 && d[i] == 'D' && de == 'U')
            {
                t = (y[i]) / 2.0;
            }
            else if (x[i] == 0 && y[i] < 0 && d[i] == 'U' && de == 'D')
            {
                t = abs(y[i]) / 2.0;
            }
            else if (y[i] == 0 && x[i] > 0 && d[i] == 'L' && de == 'R')
            {
                t = (x[i] / 2.0);
            }
            else if (y[i] == 0 && x[i] < 0 && d[i] == 'R' && de == 'L')
            {
                t = abs(x[i]) / 2.0;
            }
            if (x[i] > 0 && y[i] > 0 && ((d[i] == 'D' && de == 'R') || (d[i] == 'L' && de == 'U')))
            {
                if (x[i] == y[i])
                    t = sqrt(f) / (sqrt(2));
            }
            else if (x[i] < 0 && y[i] > 0 && ((d[i] == 'D' && de == 'L') || (d[i] == 'R' && de == 'U')))
            {
                if (abs(x[i]) == y[i])
                    t = sqrt(f) / (sqrt(2));
            }
            else if (x[i] < 0 && y[i] < 0 && ((d[i] == 'U' && de == 'L') || (d[i] == 'R' && de == 'D')))
            {
                if (abs(x[i]) == abs(y[i]))
                    t = sqrt(f) / (sqrt(2));
            }
            else if (x[i] > 0 && y[i] < 0 && ((d[i] == 'U' && de == 'R') || (d[i] == 'L' && de == 'D')))
            {
                if (x[i] == abs(y[i]))
                    t = sqrt(f) / (sqrt(2));
            }
            if (t1 > t && t != 0)
            {
                t1 = t;
            }
        }
        if (t1 == INT_MAX)
            cout << "SAFE" << endl;
        else
            cout << fixed << setprecision(1) << t1 << endl;
    }
    return 0;
}
