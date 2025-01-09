#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, count;
    cin >>tt;
    while(tt--){
        cin >>size;
        count = 0;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >>arr[i];
        }
        for(int i = 0; i < size; i++){
            if( arr[i] == 0){
                count = 2;
                break;
            }
            else if( arr[i] < 0)
                count++;
        }
        if(count % 2 == 0){
            cout << 0 << '\n';
        }
        else{
            cout << 1 << '\n';
        }
    }
}
