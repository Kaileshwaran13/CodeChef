#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, num, val, temp;
    cin >> tt;
    while(tt--){
        cin >> num;
        temp = num;
        val = 0;
        while( temp > 0){
            val = (val * 10) + (temp % 10);            
            temp /= 10;
        }
        if(val == num){
            cout << "wins" << '\n';
        }else{
            cout <<"loses" <<'\n';
        }
    }
    

}
