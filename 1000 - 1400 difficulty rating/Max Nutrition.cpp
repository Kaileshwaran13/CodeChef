#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
      
      ll n;
      cin >> n;
      vector<ll> a,b;
      for(ll i = 0 ; i < n ; i++){
        ll x;
        cin >> x;
        a.push_back(x);
      }
      map<ll,ll> m;
      for(ll i = 0 ; i < n ; i++){
        ll x;
        cin >> x;
        m[a[i]] = max(m[a[i]] , x);
      }
      
      ll ans = 0;
      for(auto p : m){
        if(p.second > 0) ans += p.second;
      }
      
      cout<< ans <<endl;
      
    }
    return 0;
}
