#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size;
    cin >> tt;
    while(tt--){
        cin >> size;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }
        int flag = 0;
        for(int i = 0; i < size; i++){
            for(int j = i; j < size; j++){
                if(gcd( arr[i], arr[j]) == 1){
                    flag = 1;
                    break;
                }
            }
            if( flag == 1)
                break;
        }
        if( flag == 1 ){
            cout << 0 << '\n';
        }
        else{
            cout << -1 <<'\n';
        }
    }
}
