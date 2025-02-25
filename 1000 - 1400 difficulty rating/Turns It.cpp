#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--){
        float u,v,a,s;
        cin >> u >> v >> a >> s;
        float sum = sqrt((u*u) - (2*a*s));
        if(v < sum){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
	return 0;
}
