#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, maxVal, flag;
    cin >> tt;
    while(tt--){
        maxVal = 0;
        cin>> size;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            maxVal = max(maxVal, arr[i]);
        }
        int arrCount[maxVal + 1 ] = {0};
        for(int i = 0; i < size; i++){
            arrCount[arr[i]]++;
        }
        flag = 0;
        for(int i = 2; i <= maxVal ; i++){
            if(arrCount[i] % i != 0){
                flag = 1;
                break;
            }
            
        }
        if(flag == 0){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
        
    }

}
