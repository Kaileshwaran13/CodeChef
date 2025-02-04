#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        if (360 % n == 0) 
            cout << "y" << " ";
        else 
            cout << "n" << " ";
        if (n <= 360 && n != 0) 
            cout << "y" << " ";
        else 
            cout << "n" << " ";
        if (n <= 26) 
            cout << "y" << endl;
        else 
            cout << "n" << endl;
    }

    return 0;
}
