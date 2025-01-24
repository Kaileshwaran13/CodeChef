#include <iostream>

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    for (int testcase_variable = 0; testcase_variable < testcase; testcase_variable++)
    {
        string s;
        cin >> s;
        int len = s.length();
        int one_count = count(s.begin(), s.end(), '1');
        int temp = 0;
        bool ans = true;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '1')
            {
                temp++;
            }
            else {
                if (temp != 0 && temp != one_count)
                {
                    ans = false;
                    break;
                }
            }
        }
        if (one_count == 0)
        {
            ans = false;
        }

        if (ans == false)
        {
            cout << "NO" << '\n';
        }
        else {
            cout << "YES" << '\n';
        }

    }
}
