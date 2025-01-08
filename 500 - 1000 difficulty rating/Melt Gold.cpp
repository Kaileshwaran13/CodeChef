#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, x, y, i, count;
    cin >>tt;
    while(tt--){
        cin >> x >> y;
        i = 1;
        count = 1;
        for(int i = 1; i > 0; i++){
            y += i;
            if( y >= x){
                break;
            }
            else{
                count++;
            }
        }
        
        cout << count <<'\n';
    }

}
