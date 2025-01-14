#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, val;
    cin >> tt;
    while(tt--){
        cin >> size >> val;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }
        int score[size], minZero = 100, minOne = 100;
        for(int i = 0; i < size; i++){
            cin >> score[i];
            if( score[i] == 0 ){
                minZero = min(arr[i], minZero);
            }
            else{
                minOne = min(arr[i] , minOne);
            }
        }
        if( val + minZero + minOne <= 100){
            cout << "YES" <<'\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }

}
