#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, minNeeded, score;
    cin >> tt;
    while(tt--){
        cin >> size >> score >> minNeeded ;
        int arr1[size], arr2[size];
        for(int i = 0; i < size; i++){
            cin >> arr1[i];
        }
        for(int i = 0; i < size; i++){
            cin >> arr2[i];
        }
        int sum = 0;
        for(int i = 0; i < size; i++){
            if( abs(arr1[i] - arr2[i]) <= minNeeded){
                if(score != 0 && score <= size){
                    sum++;
                }
                else{
                    sum = 0;
                    break;
                }
            }
        }
        if( sum >= score ){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
}
