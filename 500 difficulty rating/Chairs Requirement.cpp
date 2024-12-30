#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        if(x - y >= 0){
            cout << x - y << '\n';
        }
        else{
            cout << 0 << '\n';
        }
    }
	// your code goes here

}
