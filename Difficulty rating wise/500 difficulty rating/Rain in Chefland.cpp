#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x;
    cin >> tt;
    while(tt--){
        cin >> x;
        if(x < 3){
            cout << "LIGHT" << '\n';
        }
        else if(x < 7){
            cout << "MODERATE" << '\n';
        }
        else{
            cout << "HEAVY" << '\n';
        }
    }
	// your code goes here

}
