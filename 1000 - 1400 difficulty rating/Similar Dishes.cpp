#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;
        int count = 0;
        for (int i = 0; i < 4; i++)
        {
            string s;
            cin >> s;
            if (s == s1 || s == s2 || s == s3 || s == s4)
            {
                count++;
            }
        }
        if (count >= 2)
        {
            cout << "similar" << endl;
        }
        else
        {
            cout << "dissimilar" << endl;
        }
    }
    return 0;
}
