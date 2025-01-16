#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size;
    string str;
    cin >> tt;
    while(tt--){
        int count = 0;
        cin >> size;
        cin >>str;
        if( str == "1" || str== "10"){
            cout << "NO" <<'\n';
        }
        else{
            for(int i = 0; i < size; i++){
                if(str[i] == '1'){
                    count++;
                }
            }
            if( count <= 3){
                cout << "YES" <<'\n';
            }
            else{
                cout << "NO" <<'\n';
            }
        }
    }

}
