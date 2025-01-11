#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, first, second;
    cin >>tt;
    string str1, str2;
    while(tt--){
        first = 0;
        second = 0;
        cin >> size;
        cin >> str1 >> str2;
        for(int i = 0; i < size; i++){
            if(str1[i] == '1'){
                first++;
            }
            if(str2[i] == '1'){
                second++;
            }
        }
        if( first == second ){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }

}
