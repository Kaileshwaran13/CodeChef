#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, b;
        cin >> n >> b;
        vector < int > a;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if ((num & b) == b)
                a.push_back(num);
        }
        int sum = -1;
        for (int i = 0; i < a.size(); i++)
        {
            sum = sum & a[i];
        }
        if (sum == b)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;

}
