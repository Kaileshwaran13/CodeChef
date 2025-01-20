#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, count, size, val;
    cin >> tt;
    while(tt--){
        cin >> size >> val;
        int arr[size];
        count = 0;
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            if( arr[i] % val == 0)
                count++;
            
        }
        cout << ( 1 << count ) - 1 << '\n';
    }
}
