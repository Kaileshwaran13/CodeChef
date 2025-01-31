#include <bits/stdc++.h>
using namespace std;

int main() {
    long long T;
    cin >> T;
    while (T--)
    {
        int N, ctr = 0;
        string S;
        cin >> N >> S;
        bool flag = true;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == '1')
            {
                if (flag)
                {
                    ctr++;
                    if (i < N - 1)
                    {
                        cout << "IDK" << endl;
                    }
                    else
                    {
                        if (ctr == N)
                        {
                            cout << "YES" << endl;
                        }
                        else
                        {
                            cout << "NO" << endl;
                            flag = false;
                        }
                    }
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
                flag = false;
            }
        }
    }
    return 0;
}
