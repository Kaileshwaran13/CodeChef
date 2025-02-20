#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;

constexpr ll MOD = 1e9 + 7;
inline ll mod(ll a, ll m = MOD) {
    return (a + m) % m;
}
inline ll madd(ll a, ll b, ll m = MOD) {
    return ((a + b + m) % m + m) % m;
}
inline ll msub(ll a, ll b, ll m = MOD) {
    return ((a - b + m) % m + m) % m;
}

int main()
{
    ll t;
    cin >> t;
    vector < ll > ans;
    for (auto c = 0; c < t; c++)
    {
        ll s;
        cin >> s;
        vector < ll > nums;
        vector < ll > perm;
        for (auto i = 0; i < s; i++)
        {
            ll num;
            cin >> num;
            nums.push_back(num);
            if (i == 0)
            {
                perm.push_back(1);
            } else {
                perm.push_back(madd(2 * perm.back(), 1));
            }
        }
        sort(nums.begin(), nums.end());
        ll a = 0;
        ll b = 0;
        vector < ll > largestOf;
        for (auto i = 0; i < nums.size(); i++)
        {
            ll num = mod(nums[i]);
            ll largest = mod(perm[i]);
            if (i > 0)
                largest = msub(largest, perm[i - 1]);
            largestOf.push_back(largest);
            ll add = mod(num * largest, MOD);
            a = madd(a, add, MOD);
        }
        for (auto i = 0; i < nums.size(); i++)
        {
            ll num = mod(nums[nums.size() - 1 - i]);
            ll smallest = mod(largestOf[i]);
            ll add = mod(num * smallest);
            b = madd(b, add, MOD);
        }
        ll cur = msub(a, b);
        ans.push_back(cur);
    }
    for (auto a: ans)
    {
        cout << a << endl;
    }
}
