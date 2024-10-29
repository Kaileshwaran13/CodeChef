#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    while(t--){
        cin >> n;
        int size = n * 2, maxVal = 0;
        int arr[size];
        for(int i = 0; i < size; i++){
            arr[i] = 0;
        }
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }
        sort(arr, arr + size);
        int countArr[arr[size-1]+1] = {0};
        for(int i = 0; i < size; i++){
            countArr[arr[i]]++;
        }
        for(int i = 0; i <= arr[size - 1]; i++){
            maxVal = max(maxVal, countArr[i]);
        }
        cout << maxVal<< '\n';
    }
}
