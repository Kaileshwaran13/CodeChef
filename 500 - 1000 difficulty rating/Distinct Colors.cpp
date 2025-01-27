#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size;
    cin >> tt;
    while(tt--){
        cin >> size;
        int arr[size], maxVal = 0;
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            maxVal = max(arr[i], maxVal);
        }
        cout << maxVal << '\n';
    }

}
