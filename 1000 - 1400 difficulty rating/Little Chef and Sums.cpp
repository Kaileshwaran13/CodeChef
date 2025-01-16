#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size;
    cin >>tt;
    while(tt--){
        cin >>size;
        int arr[size];
        int minVal = INT_MAX;
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            minVal = min(arr[i], minVal);
        }
        for(int i = 0; i < size; i++){
            if( arr[i] == minVal){
                cout << i + 1 <<'\n';
                break;
            }
        }
    }

}
