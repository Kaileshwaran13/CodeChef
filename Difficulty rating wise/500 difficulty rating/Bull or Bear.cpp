#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y;
    cin >> tt;
    while(tt--){
        cin >> x >> y;
        if(x > y){
            cout << "LOSS" << '\n';
        }
        else if(x == y){
            cout << "NEUTRAL" << '\n';
        }
        else{
            cout << "PROFIT" << '\n';
        }
    }
	// your code goes here

}
