#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int32_t main()
{
    int T;
    cin >> T;
    while (T--) {
        int n, k, val;
        cin >> n >> k;
        vector<int> v;
        for(int i = 0;i < n; i++){
            cin >> val;
            v.push_back(val);
        }
        int cnt = 0;
        if (n == 1) {
            cout << (v[0] == k ? 0 : 1) << endl;
            continue;
        }
        for (int i = 0; i < n; i++) {
            if (v[i] == k) {
                continue;
            }
            cnt++;
            while(i < n-1 && v[i] == v[i + 1]) 
                i++;
            bool flg = false;
            while (i < n && __gcd(v[i], k) == k) {
                i++;
                flg = true;
            }
            if(i < n  && flg ==  true) 
                cnt++;
        }
        if(cnt >= 2){
            cout<< 2 <<endl;
        }
        else 
            cout << cnt << endl;
    }
    return 0;
}
