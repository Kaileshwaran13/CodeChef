#include <bits/stdc++.h>
using namespace std;

int main(){
    int t = 1;
    cin >> t;
    for (int test_case = 1; test_case <= t; test_case++)
    {

        long long n;
        cin >> n;
        long long a[n];
        for (auto & x: a)
            cin >> x;
        long long b[n];
        for (auto & x: b)
            cin >> x;
        vector < pair < long long, long long >> vec1, vec2;
        for (long long i = 0; i < n; i++)
        {
            vec1.push_back({a[i],i});
        }
        for (long long i = 0; i < n; i++)
        {
            vec2.push_back({b[i],i});
        }
        sort(vec1.rbegin(), vec1.rend());
        sort(vec2.rbegin(), vec2.rend());
        map < long long, long long > map1;
        for (long long i = 0; i < n; i++)
        {
            map1[vec2[i].second] = i;
        }
        long long ans = 0, curr_max = 0;
        for (long long i = 0; i < n; i++)
        {
            if (i == 0)
            {
                ans++;
                curr_max = map1[{vec1[i].second}];
                continue;
            }
            long long pos = map1[{vec1[i].second}];
            if (pos < curr_max)
            {
                ans++;
            }
            curr_max = min(curr_max, map1[{vec1[i].second}]);
        }
        cout << ans << endl;
    }
    return 0;
}
