#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, val, sum;
    cin >>tt;
    while(tt--){
        sum = 0;
        cin >> num;
        while(num--){
            cin >>val;
            sum += val;
        }
        if(sum % 2 == 0){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" <<'\n';
        }
    }

}
