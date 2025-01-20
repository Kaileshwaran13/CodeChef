#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int count;
        long long k;
        cin >> count >> k;
        if (k < (count * (count - 1)))
        {
            cout << "-1" << endl;
        }else{
            long long sum = (count * (count + 1) / 2) - 1;
            for (int i = 0; i < count - 1; i++)
            {
                cout << "1" << " ";
            }
            cout << k - sum << endl;
        }
    }
}
