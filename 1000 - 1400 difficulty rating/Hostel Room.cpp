#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, num, maxVal;
    cin >> tt;
    while(tt--){
        cin >> size >> num;
        maxVal = num;
        int arr[size] = {0};
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            num += arr[i];
            maxVal = max(maxVal, num);
        }
        cout << maxVal << '\n';
    }

}
