#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    while(t--){
        cin >> n;
        if(n == 1)
            cout << "1 1" << '\n';
        else{
            cout << ( n / 2) + ( n % 2 )  << " ";
            if(n % 3 == 0)
                cout << n / 3 << '\n';
            else
                cout << n / 3 + 1 << '\n';
        }
    }
}
