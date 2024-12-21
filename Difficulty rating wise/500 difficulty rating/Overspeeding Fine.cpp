#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x;
    cin >> tt;
    while(tt--){
        cin >> x;
        if(x <= 70){
            cout << 0 << '\n';
        }
        else if( x <= 100){
            cout << 500 << '\n';
        }
        else{
            cout << 2000 << '\n';
        }
    }
	// your code goes here

}
