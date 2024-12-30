#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        cout << max(x,y) - min(x,y) << '\n';
    }
	// your code goes here

}
