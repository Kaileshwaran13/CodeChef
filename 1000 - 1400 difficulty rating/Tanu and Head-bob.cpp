#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, Y, N, I;
    cin >> tt;
    string str;
    while(tt--){
        Y = 0;
        N = 0;
        I = 0;
        cin >> size;
        cin >> str;
        for(int i = 0; i < size; i++){
            if( str[i] == 'Y'){
                Y++;
            }
            else if( str[i] == 'N'){
                N++;
            }
            else{
                I++;
            }
        }
        if( I > 0){
            cout << "INDIAN" << '\n';
        }
        else if(Y > 0){
            cout << "NOT INDIAN" << '\n';
        }
        else{
            cout << "NOT SURE" << '\n';
        }
    }

}
