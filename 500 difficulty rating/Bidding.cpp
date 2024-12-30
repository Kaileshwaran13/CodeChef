#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        if( max(x,(max(y,z))) == z ){
            cout << "Charlie" << '\n';
        }
        else if( max(x,(max(y,z))) == y ){
            cout << "Bob" << '\n';
        }
        else{
            cout << "Alice" << '\n';
        }
    }
	// your code goes here

}
