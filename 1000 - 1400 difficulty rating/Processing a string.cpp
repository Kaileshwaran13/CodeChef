#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, sum;
    string str;
    cin >> tt;
    while(tt--){
        sum = 0;
        cin >> str;
        for(int i = 0; i < str.length(); i++){
            if( str[i] >= '0' && str[i] <= '9'){
                sum += (str[i] - '0');
            }
        }
        cout << sum << '\n';
    }
}
