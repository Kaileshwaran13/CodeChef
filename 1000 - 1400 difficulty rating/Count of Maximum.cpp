#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, maxVal, maxCount;
    cin>> tt;
    while(tt--){
        maxVal = 0;
        cin >> size;
        int arr[size] = {0};
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            maxVal = max(arr[i], maxVal);
        }
        int arrCount[maxVal + 1] = {0};
        for(int i = 0; i < size; i++){
            arrCount[arr[i]]++;
        }
        maxCount = 0;
        for(int i = 0; i <= maxVal; i++){
            maxCount = max(maxCount, arrCount[i]);
        }
        for(int i = 0; i <= maxVal; i++){
            if(arrCount[i] == maxCount){
                cout << i << " " << maxCount << '\n';
                break;
            }
        }
        
    }

}
