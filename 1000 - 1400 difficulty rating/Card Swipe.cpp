#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, size, maxVal, count, ans;
    cin >> tt;
    while(tt--){
        maxVal = 0;
        cin >> size;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
            maxVal = max(maxVal, arr[i]);
        }
        
        count = 0;
        ans = 0;
        int arrCount[maxVal + 1] = {0};
        for(int i = 0; i < size; i++){
            if(arrCount[arr[i]] == 1){
                arrCount[arr[i]]--;
                ans--;
            }
            else{
                arrCount[arr[i]]++;
                ans++;
            }
            count = max(ans, count);
        }
        cout << count << '\n';
    }

}
