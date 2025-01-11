#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, minValIndex, maxValIndex, swapping;
    cin >> tt;
    while(tt--){
        minValIndex = 0, maxValIndex = 0;
        cin >> size;
        int arr[size];
        int minVal = 100, maxVal = 0;
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            if(minVal > arr[i]){
                minVal = arr[i];
                minValIndex = i;
            }
            if(maxVal < arr[i]){
                maxVal = arr[i];
                maxValIndex = i;
            }
        }
        
        swapping = 0;
        if(minValIndex != 0){
            for(int i = minValIndex; i >= 1; i--){
                swap(arr[i], arr[i - 1]);
                swapping++;
            }
        }
        
        for(int i = 0; i < size; i++){
            if(arr[i] == maxVal){
                maxValIndex = i;
                break;
            }
        }
        
        if(maxValIndex != size - 1){
            for(int i = maxValIndex; i < size - 1; i++){
                swap(arr[i], arr[i + 1]);
                swapping++;
            }
        }
        cout << swapping << '\n';
    }

}
