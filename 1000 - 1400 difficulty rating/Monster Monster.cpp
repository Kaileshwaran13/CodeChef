#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long n, x;
	    cin >> n >> x;
	    vector<long long> v(n);
	    for(int i = 0; i < n; i++)
	    {
	        cin >> v[i];
	    }
	    sort(v.rbegin(), v.rend());
	    long long sum = 0, maxi = INT_MIN;
	    for(int i = 1; i < n; i++){
	        sum += x;
	        maxi = max(sum + v[i], maxi);
	    }
	    cout << max(maxi, v[0]) << endl;
	}
}
