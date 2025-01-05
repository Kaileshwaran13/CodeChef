#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num;
    cin >> tt;
    while(tt--){
        cin >> num;
        if( num <= 10 ){
            cout << "Lower Double" << '\n';
        }
        else if( num <= 15 ){
            cout << "Lower Single" << '\n';
        }
        else if( num <= 25 ){
            cout <<"Upper Double" << '\n';
        }
        else{
            cout << "Upper Single" << '\n';
        }
    }

}
