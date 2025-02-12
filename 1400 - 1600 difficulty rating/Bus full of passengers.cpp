#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll N, M, Q;
        cin >> N >> M >> Q;

        unordered_set < ll > onBus;
        ll currentPassengers = 0;
        bool consistent = true;

        for (ll i = 0; i < Q; i++)
        {
            char ch;
            ll person;
            cin >> ch >> person;

            if (ch == '+')
            {
                if (currentPassengers < M)
                {
                    if (onBus.find(person) != onBus.end())
                    {
                        consistent = false;
                    }
                    else
                    {
                        onBus.insert(person);
                        currentPassengers++;
                    }
                }
                else
                {
                    consistent = false;
                }
            }
            else if (ch == '-')
            {
                if (onBus.find(person) == onBus.end())
                {
                    consistent = false;
                }
                else
                {
                    onBus.erase(person);
                    currentPassengers--;
                }
            }
        }

        if (consistent)
        {
            cout << "Consistent" << endl;
        }
        else
        {
            cout << "Inconsistent" << endl;
        }
    }
    return 0;
}
