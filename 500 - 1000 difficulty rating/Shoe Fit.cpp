#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, count;
    cin >> tt;
    while(tt--){
        count = 0;
        for(int i = 0; i < 3; i++){
            cin >> num;
            if( num == 1){
                count++;
            }
        }
        if( count == 3 || count == 0){
            cout << 0 << '\n';
        }
        else{
            cout << 1 <<'\n';
        }
    }

}
