#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, z;
    cin >> tt;
    while(tt--){
        cin >> x >> y >> z;
        if(x > y && x > z){
            if(y > z){
                cout << y << '\n';
            }else{
                cout << z << '\n';
            }
        }
        else if( y > x && y > z){
            if(x > z){
                cout << x << '\n';
            }
            else{
                cout << z << '\n';
            }
        }
        else{
            if(x > y){
                cout << x << '\n';
            }
            else{
                cout << y << '\n';
            }
        }
    }
	// your code goes here

}
