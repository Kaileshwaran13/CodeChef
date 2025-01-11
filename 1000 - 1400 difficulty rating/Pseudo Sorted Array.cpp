#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size;
    cin >> tt;
    while(tt--){
        bool flag = 0;
        cin >> size;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }
        
        for(int i = 0; i < size - 1; i++){
            if(arr[i] > arr[i + 1]){
                swap(arr[i], arr[i+1]);
                break;
            }
        }
        
        for(int i = 0; i < size - 1; i++){
            if(arr[i] > arr[i + 1]){
                flag = 1;
                cout << "NO" << '\n';
                break;
            }
        }
        
        if(flag == 0){
            cout << "YES" << '\n';
        }
    
    }

}
