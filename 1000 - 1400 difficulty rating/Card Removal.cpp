#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, maxVal, maxCount;
    cin >> tt;
    while(tt--){
        maxCount = 0;
        maxVal = 0;
        cin >> size;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            maxVal = max(maxVal, arr[i]);
        }
        
        int repetation[maxVal] = {0};
        for(int i = 0; i < size; i++){
            repetation[arr[i] - 1]++;
        }
        
        for(auto x : repetation){
            maxCount = max(maxCount,x);
        }
        cout << size - maxCount << '\n';
    }
}
