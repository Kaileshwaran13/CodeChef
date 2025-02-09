#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ll n, m;
    cin >> n >> m;
    map < string, set < string >> countrytochef;
    map < string, int > chef;
    map < string, int > country;
    set < string > fcountry;
    set < string > fchef;
    for (ll i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        countrytochef[b].insert(a);
    }
    for (ll i = 0; i < m; i++)
    {
        string a;
        cin >> a;
        chef[a]++;
    }
    for (auto x: countrytochef)
    {
        auto m = x.second;
        ll count = 0;
        for (auto l: m)
        {
            count += chef[l];
        }
        country[x.first] = count;
    }
    int mini = -1e8;

    for (auto x: chef)
    {
        mini = max(mini, x.second);
    }
    int mini2 = -1e8;
    for (auto x: country)
    {
        mini2 = max(mini2, x.second);
    }
    for (auto x: chef)
    {
        if (x.second == mini)
        {
            fchef.insert(x.first);
        }
    }

    for (auto x: country)
    {
        if (x.second == mini2)
        {
            fcountry.insert(x.first);
        }
    }
    auto it = fcountry.begin();
    auto p = fchef.begin();
    cout << * it << endl;
    cout << * p << endl;
    return 0;
}
