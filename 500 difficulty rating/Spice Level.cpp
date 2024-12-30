#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x;
    cin >> tt;
    while(tt--){
        cin >> x;
        if(x < 4){
            cout << "MILD" << '\n';
        }
        else if(x < 7){
            cout << "MEDIUM" << '\n';
        }
        else{
            cout << "HOT" << '\n';
        }
    }
	// your code goes here

}
