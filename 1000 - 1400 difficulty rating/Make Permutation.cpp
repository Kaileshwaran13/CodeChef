#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, count;
    cin >>tt;
    while(tt--){
        count = 0 ;
        cin >> size;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }
        sort(arr, arr + size);
        for(int i = 0; i < size; i++){
            if(arr[i] <= i + 1)
                count++;
        }
        if(count == size){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }
    

}
