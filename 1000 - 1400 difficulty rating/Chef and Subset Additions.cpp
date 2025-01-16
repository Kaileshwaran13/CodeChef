#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, a, b;
    cin >> tt;
    while(tt--){
        cin >> size >> a >> b;
        int arr1[size], arr2[size];
        for(int i = 0; i < size; i++){
            cin >> arr1[i];
        }
        for(int i = 0; i < size; i++){
            cin >> arr2[i];
        }
        int count = 0;
        for(int i = 0; i < size; i++){
            if( arr2[i] - arr1[i] == a || arr2[i] - arr1[i] == b){
                count++;
            }
        }
        if( count == size){
            cout << "YES" <<'\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }

}
