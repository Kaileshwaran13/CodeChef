#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, needs;
    cin >> tt;
    while(tt--){
        cin >> size >> needs;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }
        int daily = 0, flag = 0;
        for(int i = 0; i < size; i++){
            if(daily + arr[i] >= needs){
                daily += arr[i] - needs;
            }
            else{
                flag = 1;
                cout << "NO " << i + 1 << '\n';
                break;
            }
        }
        if(flag == 0){
            cout << "YES" << '\n';
        }
    }
}
