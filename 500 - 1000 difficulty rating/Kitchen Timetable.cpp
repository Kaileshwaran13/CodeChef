#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, count;
    cin >>tt;
    while(tt--){
        cin >> size;
        int arr1[size];
        int arr2[size];
        for(int i = 0; i < size; i++){
            cin >>arr1[i];
        }
        for(int i = 0; i < size; i++){
            cin >>arr2[i];
        }
        count = 0;
        if(arr1[0] >= arr2[0]){
            count++;
        }
        for(int i = 1; i < size; i++){
            if( arr1[i] - arr1[i - 1] >= arr2[i]){
                count++;
            }
        }
        cout << count << '\n';
    }

}
