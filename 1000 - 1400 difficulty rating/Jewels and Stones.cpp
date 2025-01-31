#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1;
        cin >> s2;
        set < char > s;
        int r = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            char x = s1[i];
            s.insert(x);
        }
        auto it = s.begin();
        for (auto it = s.begin(); it != s.end(); it++)
        {
            for (int j = 0; j < s2.size(); j++)
            {
                if (( * it) == s2[j])
                    r++;
            }
        }
        cout << r << endl;
    }
    return 0;
}
