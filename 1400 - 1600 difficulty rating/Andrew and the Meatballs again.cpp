#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        vector < int > vo;
        vector < int > ve;
        int cnt(0);
        for (int i = 1; i <= N; i++)
        {
            if (i % 2 == 0) 
                ve.push_back(i);
            else 
                vo.push_back(i);
        }
        if (K == 1)
            cout << 1 << endl;
        else {
            if (ve.size() >= K)
            {
                int cnt(0);
                for (auto i: ve)
                {
                    if (cnt == K)
                        break;
                    cnt++;
                    cout << i << " ";
                }
            }
            else
                cout << -1;
        }
        cout << endl;
    }
    return 0;
}
