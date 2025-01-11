#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, maxAns;
    cin >> tt;
    while(tt--){
        maxAns = 0;
        cin >> size;
        int arr1[size], arr2[size];
        for(int i = 0; i < size; i++){
            cin >> arr1[i];
        }
        for(int i = 0; i < size; i++){
            cin >> arr2[i];
        }
        int resultArr[size];
        for(int i = 0; i < size; i++){
            resultArr[i] = (arr1[i] * 20) - (arr2[i] * 10);
            maxAns = max(resultArr[i], maxAns);
        }
        
        cout << maxAns << '\n';
        
    }

}
