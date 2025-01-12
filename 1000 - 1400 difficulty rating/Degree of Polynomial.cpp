#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    int size;
    while(tt--){
        cin >> size;
        int arr[size], i = -1, val = 0;
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            if( arr[i] != 0){
                val = i;
            }
        }
        cout << val << '\n';
    }

}
