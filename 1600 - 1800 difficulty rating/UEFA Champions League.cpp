#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        map < string, pair < int, int >> mp;
        for (int i = 0; i < 12; i++) {
            string a, b;
            int x, y;
            cin >> a >> x >> b >> y >> b;

            mp[a].second += x - y;
            mp[b].second += y - x;

            if (x > y) mp[a].first += 3;
            else if (y > x) mp[b].first += 3;
            else {
                mp[a].first++;
                mp[b].first++;
            }
        }
        set < pair < pair < int, int > , string > , greater < pair < pair < int, int > , string >>> st;
        for (auto & x: mp)
            st.insert({
                {
                    x.second.first, x.second.second
                },
                x.first
            });
        auto node = st.begin();
        cout << ( * node).second << " ";
        node++;
        cout << ( * node).second << endl;
    }
    return 0;
}
