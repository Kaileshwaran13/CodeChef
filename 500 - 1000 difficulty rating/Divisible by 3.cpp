#include <iostream>

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    for (int testcase_variable = 0; testcase_variable < testcase; testcase_variable++)
    {
        int a, b, ans = 0;
        cin >> a >> b;
        if (a % 3 == 0 || b % 3 == 0)
        {
            cout << 0 << endl;
        }
        else if (a % 3 == b % 3)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}
